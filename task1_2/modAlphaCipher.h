#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <codecvt>
#include <vector>
#include <map>
#include <algorithm>
#include <locale>
using namespace std;

class modAlphaCipher
{
private:
    int newkey; // количество столбцов таблицы
public:
    modAlphaCipher()=delete;
    modAlphaCipher(const int& key) :newkey(key) {}; // конструктор
    string encrypt(const string& open_st); // зашифрование
    string decrypt(const string& cipher_st); // расшифрование
};
