#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    cout << "Enter choice (1-4): ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (choice) {
        case 1: cout << "Sum: " << num1 + num2 << endl; break;
        case 2: cout << "Difference: " << num1 - num2 << endl; break;
        case 3: cout << "Product: " << num1 * num2 << endl; break;
        case 4: cout << "Quotient: " << num1 / num2 << endl; break;
        default: cout << "Invalid choice" << endl;
    }
    return 0;
}

