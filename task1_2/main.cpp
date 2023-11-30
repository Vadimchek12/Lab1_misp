#include "modAlphaCipher.h"

bool isValid(const string& s)
{
    for(auto c:s)
        if (!isalpha(c)||!isupper(c))
            return false;
    return true;
}
int main(int argc, char **argv)
{
    int key;
    string st;
    unsigned op;
    cout<<"ВВЕДИТЕ КЛЮЧ (ЧИСЛО) : ";
    cin>>key;
    if (!cin.good()) {
        clog<<"КЛЮЧ НЕ ПОДХОДИТ\n";
        return 1;
    }
    cout<<"КЛЮЧ ПРИНЯТ\n";
    modAlphaCipher cipher(key);
    do {
        cout<<"ВЫБЕРИТЕ ОПЕРАЦИЮ (0-ВЫХОД, 1-ЗАШИФРОВАТЬ, 2-РАСШИФРОВАТЬ): ";
        cin>>op;
        if (op > 2) {
            cout<<"ОШИБКА В ВЫБОРЕ ОПЕРАЦИИ\n";
        } else if (op >0) {
            cout<<"ВВЕДИТЕ СТРОКУ, СОСТОЯЩУЮ ИЗ ЛАТИНИЦЫ : ";
            cin>>st;
            if (isValid(st)) {
                if (op==1) {
                    cout<<"ЗАШИФРОВАННАЯ СТРОКА: " << cipher.encrypt(st) << endl;
                } else {
                    cout<<"РАСШИФРОВАННАЯ СТРОКА: " << cipher.decrypt(st) << endl;
                }
            } else {
                cout<<"НЕКОРРЕКТНАЯ СТРОКА.\n";
            }
        }
    } while (op!=0);

    return 0;
}
