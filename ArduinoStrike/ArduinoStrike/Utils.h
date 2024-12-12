#pragma once

#include <sstream>
#include <fstream>
#include <iostream>
#include <windows.h>
#include <filesystem>

using namespace std;
using namespace filesystem;

class Utils
{
public:
    Utils();
    void PrintAscii(const string& ascii);
    void PrintHotkeys(const string& keys);
    void PrintCenteredText(const string& text, bool wrap = true);

private:
    void Install();
    void ConsoleClear();
    string GenerateRandomData(int length);
    void SetConsoleMode(const string& title);
};