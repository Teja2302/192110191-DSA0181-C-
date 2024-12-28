#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n == 0 || n == 1) return 1; 
    return n * factorial(n - 1); 
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << ".\n";
    return 0;
}

