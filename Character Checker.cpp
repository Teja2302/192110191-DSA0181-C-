#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            cout << "Vowel" << endl;
        else cout << "Consonant" << endl;
    } else if (ch >= '0' && ch <= '9') cout << "Digit" << endl;
    else cout << "Special character" << endl;
    return 0;
}
