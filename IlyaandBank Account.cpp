#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 0) {
        cout << n << endl;
    } else {
        int opt1 = n / 10;
        int opt2 = (n / 100) * 10 + (n % 10);
        cout << max({n, opt1, opt2}) << endl;
    }

    return 0;
}

