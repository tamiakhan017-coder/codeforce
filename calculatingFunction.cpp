#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n; // Read input n

    if (n % 2 == 0) {
        // If n is even, the result is n/2
        cout << n / 2 << endl;
    } else {
        // If n is odd, the result is -(n+1)/2
        cout << -(n + 1) / 2 << endl;
    }

    return 0;
}

