/*

    Project : PvZHook
    Title : mainwindow.cpp
    Author : Saito Katsu
    Description : Includes majority of the form event code and the memory editing code

    Version : v1.0

*/

// Win32 Libraries
#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <tchar.h>
#include <vector>

// Qt Libraries
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

using namespace std;

// Address Functions
DWORD GetModuleBaseAddress(TCHAR* lpszModuleName, DWORD pID) {
    DWORD dwModuleBaseAddress = 0;
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pID); // make snapshot of all modules within process
    MODULEENTRY32 ModuleEntry32 = { 0 };
    ModuleEntry32.dwSize = sizeof(MODULEENTRY32);

    if (Module32First(hSnapshot, &ModuleEntry32)) //store first Module in ModuleEntry32
    {
        do {
            if (_tcscmp(ModuleEntry32.szModule, lpszModuleName) == 0) // if Found Module matches Module we look for -> done!
            {
                dwModuleBaseAddress = (DWORD)ModuleEntry32.modBaseAddr;
                break;
            }
        } while (Module32Next(hSnapshot, &ModuleEntry32)); // go through Module entries in Snapshot and store in ModuleEntry32


    }
    CloseHandle(hSnapshot);
    return dwModuleBaseAddress;
}

DWORD GetPointerAddress(HWND hwnd, DWORD gameBaseAddr, DWORD address, vector<DWORD> offsets)
{
    DWORD pID = NULL; // Game process ID
    GetWindowThreadProcessId(hwnd, &pID);
    HANDLE phandle = NULL;
    phandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
    if (phandle == INVALID_HANDLE_VALUE || phandle == NULL);

    DWORD offset_null = NULL;
    ReadProcessMemory(phandle, (LPVOID*)(gameBaseAddr + address), &offset_null, sizeof(offset_null), 0);
    DWORD pointeraddress = offset_null; // the address we need
    for (int i = 0; i < offsets.size() - 1; i++) // we dont want to change the last offset value so we do -1
    {
        ReadProcessMemory(phandle, (LPVOID*)(pointeraddress + offsets.at(i)), &pointeraddress, sizeof(pointeraddress), 0);
    }
    return pointeraddress += offsets.at(offsets.size() - 1); // adding the last offset
}

// Window Variables
HWND hwnd;
DWORD procId;
HANDLE handle;
DWORD gameBaseAddress;

// Modules
char gameModule[] = "Plants vs.Zombies.exe";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->currentStatus->setStyleSheet("QLabel { color : red;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool injected = false;
void MainWindow::on_confirmHook_clicked()
{
    if (!injected) {
        hwnd = FindWindowA(NULL, "Plants vs. Zombies");

        if (hwnd == NULL) {
            QMessageBox msgBox;
            msgBox.setText("Hook error: Failed to find PvZ");
            msgBox.exec();
        }
        else {
            GetWindowThreadProcessId(hwnd, &procId);
            handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procId);
            gameBaseAddress = GetModuleBaseAddress(_T(gameModule), procId);

            ui->currentStatus->setStyleSheet("QLabel{color : green};");
            ui->currentStatus->setText("Hooked");
            injected = true;
        }
    }
    else {
        QMessageBox msgBox;
        msgBox.setText("Hook error: Already hooked");
        msgBox.exec();
    }
}

void MainWindow::on_setSun_clicked()
{
    if (!injected) {
        QMessageBox msgBox;
        msgBox.setText("Execution error: Not hooked");
        msgBox.exec();
    }
    else {
        int sunTrueVal = ui->sunValue->text().toInt();

        DWORD sunAddr = 0x00729670;
        vector<DWORD> sunOffsets{ 0x868, 0x5578 };
        DWORD sunPtrAddr = GetPointerAddress(hwnd, gameBaseAddress, sunAddr, sunOffsets);

        WriteProcessMemory(handle, (LPVOID*)(sunPtrAddr), &sunTrueVal, 4, 0);
    }
}

void MainWindow::on_setCash_clicked()
{
    int cashTrueVal = ui->cashValue->text().toInt();
    // We divide cashTrueVal by ten because PvZ handles cash in memory as if it had been divided that way
    cashTrueVal = cashTrueVal / 10;

    DWORD cashAddr = 0x00729670;
    vector<DWORD> cashOffsets = { 0x94C, 0x50 };
    DWORD cashPtrAddr = GetPointerAddress(hwnd, gameBaseAddress, cashAddr, cashOffsets);

    WriteProcessMemory(handle, (LPVOID*)(cashPtrAddr), &cashTrueVal, 4, 0);
}