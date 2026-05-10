#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int q = n / 3;
    int r = n % 3;

    int c1 = q, c2 = q;

    if (r == 1) {
        c1++;
    } else if (r == 2) {
        c2++;
    }

    cout << c1 << " " << c2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

