#include <iostream>
#include <cctype>
#include "modAlphaCipher.h"
#include <codecvt>
using namespace std;

int main(int argc, char **argv) {
        locale loc("ru_RU.UTF-8");
        locale::global(loc);
        bool isTrue = true;
        wstring mode,NeMode,wstr,wstr_key;
        do {
            cout << "Укажите режим работы(Введите Encode/Decode/Exit):";
            wcin >> mode;
            if (mode == L"Encode") {
                cout << "Введите строку для шифрования:";
                wcin.get();
                getline(wcin,wstr);
                cout << "Введите ключ:";
                getline(wcin,wstr_key);
            }
            if (mode == L"Decode") {
                cout << "Введите строку для расшифрования:";
                wcin.get();
                getline(wcin,wstr);
                cout << "Введите ключ:";
                getline(wcin,wstr_key);
            }
            if (mode == L"Exit") {
                cout << "До свидания." << endl;
                isTrue = false;
                break;
            }
        } while (isTrue != false);
        return 0;
    }
