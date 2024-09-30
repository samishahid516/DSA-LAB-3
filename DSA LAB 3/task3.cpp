#include <iostream>

using namespace std;

bool isNumberPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int divisor = 2; divisor < n; divisor++) {
        if (n % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; 
  
    bool result = isNumberPrime(n);

    cout << "Prine Number : "<< (result ? "true" : "false") << endl;

    return 0;
}
