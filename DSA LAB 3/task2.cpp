#include <iostream>
using namespace std;

int binomialSelect(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialSelect(n - 1, k - 1) + binomialSelect(n - 1, k);
}

int main() {
    int n;
    int  k;
    cout << "Enter values for n and k: ";
    cin >> n;
    cin   >> k;

    if (k < 0 || k > n) {
        cout << "Invalid input. k must be in the range 0 to n." << endl;
        return 1;
    }

    int result = binomialSelect(n, k);
    cout << "C(" << n << ", " << k << ") = " << result << endl;

    return 0;
}
