#include <iostream>
using namespace std;
void printIntegers(int n) {
    if (n < 0) {
        return;
    }
    cout << endl << n;
    printIntegers(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from " <<  n << " to 0: ";
    printIntegers(n);
    cout << endl;

    return 0;
}
