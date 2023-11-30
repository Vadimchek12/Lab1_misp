#pragma once
#include <locale>
#include <vector>
#include <string>
#include <map>
using namespace std;
class modAlphaCipher
{
private:
    wstring numAlpha =
    L"АБВГДЕЖЗИКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
    map <char,int> alphaNum; 
    vector <int> key; 
    vector<int> convert(const wstring& s);//преобразование строка-вектор
    wstring convert(const vector<int>& v);//преобразование вектор-строка
public:
    modAlphaCipher()=delete;//запретим конструктор без параметров
    modAlphaCipher(const wstring& skey); //конструктор для установки ключа
    wstring encrypt(const wstring& open_text); //зашифрование
    wstring decrypt(const wstring& cipher_text);
};
