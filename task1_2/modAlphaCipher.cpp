#include "modAlphaCipher.h"

string modAlphaCipher::encrypt(const string& open_st) // ЗАШИФРОВАНИЕ
{
    string n_s = open_st;
    int len, nstrok, position, a; // len-длина строки ; nstrok-количество строк ; position-новая позиция символа, который меняем ;
    len = open_st.size(); // st-строка с текстом, который вводится пользователем
    nstrok = (len - 1) / newkey + 1; //newkey-количество столбцов в таблице
    a = 0;
    for (int colum_number = newkey; colum_number > 0; colum_number--) { // colum_number-номер столбца
        for (int line_number = 0; line_number < nstrok; line_number++) { // line_number-номер строки
            position = colum_number+newkey*line_number;
            if (position-1 < len) {
                n_s[a] = open_st[position-1];
                a++;
            }
        }
    }
    return n_s;
}
string modAlphaCipher::decrypt(const std::string& cipher_st) // РАСШИФРОВАНИЕ
{
    string n_s = cipher_st;
    int len, nstrok, position, a; // len-длина строки ; nstrok-количество строк ; position-новая позиция символа, который меняем ;
    len = cipher_st.size(); // st-строка с текстом, который вводится пользователем
    nstrok = (len - 1) / newkey + 1; // newkey-количество столбцов в таблице
    a = 0;
    for (int colum_number = newkey; colum_number > 0; colum_number--) { // colum_number-номер столбца
        for (int line_number = 0; line_number < nstrok; line_number++) { // line_number-номер строки
            position = newkey*line_number+colum_number; //
            if (position-1 < len) {
                n_s[position-1] = cipher_st[a];
                a++;
            }
        }
    }
    return n_s;
}

