
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <gdiplus.h>
#include <string>
#include <fstream>
#include <WinInet.h>
#include <random>
#include <tlhelp32.h>
#include <conio.h>
#include <comdef.h>
#include <tchar.h>
#include <mmsystem.h>
#include <CommCtrl.h>
#include <debugapi.h>
#include <time.h>
#include <stdlib.h>
#include <Shlwapi.h>
#pragma comment (lib, "urlmon.lib")
using namespace std;

auto RandomTitle = [](int iterations) {
    std::string Title;
    for (int i = 0; i < iterations; i++)
        Title += rand() % 255 + 1;
    return Title;
};


void checkadmin() {
    bool IsRunningAsAdmin = false;

    BOOL fRet = FALSE;
    HANDLE hToken = NULL;
    if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken)) {
        TOKEN_ELEVATION Elevation;
        DWORD cbSize = sizeof(TOKEN_ELEVATION);
        if (GetTokenInformation(hToken, TokenElevation, &Elevation, sizeof(Elevation), &cbSize)) {
            fRet = Elevation.TokenIsElevated;
        }
    }
    if (hToken) {
        CloseHandle(hToken);
    }
    IsRunningAsAdmin = fRet;

    if (!IsRunningAsAdmin) {
        int msgboxID = MessageBoxA(
            NULL,
            (LPCSTR)"please, run as admin",
            (LPCSTR)"ADMIN",
            MB_OK
        );
        exit(-1);
    }
}


int loading()
{
    SetConsoleTitleA(RandomTitle(rand() ^ 10 + 255).c_str());
    checkadmin();
    Sleep(5000);
    system("color 6");
    printf("w");
    Sleep(50);
    printf("e");
    Sleep(50);
    printf("l");
    Sleep(50);
    printf("c");
    Sleep(50);
    printf("o");
    Sleep(50);
    printf("m");
    Sleep(50);
    printf("e");
    Sleep(50);
    printf(" ");
    Sleep(50);
    printf("t");
    Sleep(50);
    printf("o");
    Sleep(50);
    printf(" ");
    Sleep(50);
    printf("T");
    Sleep(50);
    printf("i");
    Sleep(50);
    printf("t");
    Sleep(50);
    printf("a");
    Sleep(50);
    printf("n");
    Sleep(50);
    printf("i");
    Sleep(50);
    printf("u");
    Sleep(50);
    printf("m");
    Sleep(50);
    printf(" S");
    Sleep(50);
    printf("p");
    Sleep(50);
    printf("o");
    Sleep(50);
    printf("o");
    Sleep(50);
    printf("f");
    Sleep(50);
    printf("e");
    Sleep(50);
    printf("r");
    Sleep(50);
    int msgboxID = MessageBoxA(
        NULL,
        (LPCSTR)"loading modules",
        (LPCSTR)"Loading...",
        MB_OK
    );
    int i = 0;
    char load[26];
    while (i < 25)
    {
        system("cls");
        load[i++] = '#';
        load[i] = '\0';

        printf("                  LOADING");
        printf("\n\n        [%-25s]", load);
        system("color 1");
        system("color 2");
        system("color 3");
        system("color 4");
        system("color 5");
        system("color 6");
        system("color 7");
        system("color 8");
        system("color 9");
        system("color a");
        system("color b");
        system("color c");
        system("color d");
        system("color e");
        Sleep(2);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    system("color c");
    system("TASKKILL /F /IM FortniteClient-Win64-Shipping.exe >NUL 2> 1");
    system("TASKKILL /F /IM EpicGamesLauncher.exe >NUL 2> 1");
    system("TASKKILL /F /IM UnrealCEFSubProcess.exe");
    printf("\n[-] Closing Fortnite\n[-] Closing UnrealCEFSubProcess\n[-] Closing Epic Games Launcher");
    Sleep(5000);
    system("cls");
    system("color b");
    system("pause");
    system("color c");
}
int main()
{
    loading();
menu:
    system("cls");
    MessageBoxA(NULL, "menu initialized", "Titanium", MB_OK);
    int choice;
    system("color c");
    printf("        [+] status: undetected");
    printf("\n");
    printf("\n");
    printf("        T   \n");
    Sleep(200);
    printf("        i   \n");
    Sleep(200);
    printf("        t   \n");
    Sleep(200);
    printf("        a  \n");
    Sleep(200);
    printf("        n\n");
    Sleep(200);
    printf("        i\n");
    Sleep(200);
    printf("        u\n");
    Sleep(200);
    printf("        m\n");
    Sleep(200);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    Sleep(100);
    printf("[1] Spoof\n[2] Clean\n[3] Check serials\n[4] Bypass BE/EAC\n[5] Secret\n> Your option: ");
    cin >> choice;
    if (choice == 1)
    {
        system("cls");
        system("color d");
        system("color c");
        printf("        [!] spoofing do not close window\n");
        Sleep(5000);
        system("cls");
        system("color a");
        printf("        [+] spoofed\n");
        Sleep(1000);
        printf("        [?] returning to menu\n");
        Sleep(1000);
        goto menu;
    }
    if (choice == 2)
    {
        system("cls");
        system("color c");
        printf("        [!] cleaning do not close window\n");
        Sleep(5000);
        system("cls");
        system("color a");
        Sleep(10000);
        printf("        [+] cleaned\n");
        Sleep(1000);
        printf("        [?] returning to menu\n");
        Sleep(1000);
        goto menu;
    }
    if (choice == 3)
    {
        system("cls");
        system("wmic bios get serialnumber");
        Sleep(5000);
        goto menu;
    }
    if (choice == 4)
    {
        system("start cmd");
    }
    if (choice == 5)
    {

    }
}
