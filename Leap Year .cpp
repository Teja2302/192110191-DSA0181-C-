#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    cout << (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? "Leap year" : "Not a leap year") << endl;
    return 0;
}
