#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr;

    cout << "Enter a string: ";
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i]; 
    }
    if (str == reversedStr) {
        cout << "\"" << str << "\" is a palindrome.\n";
    } else {
        cout << "\"" << str << "\" is not a palindrome.\n";
    }

    return 0;
}

