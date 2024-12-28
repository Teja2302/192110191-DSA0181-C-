#include <iostream>
using namespace std;
void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    fibonacci(terms);
    return 0;
}

