#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int oddCount = 0;
    
    // We check 2*n numbers
    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0) oddCount++;
    }

    // If half the numbers are odd, we can form n pairs
    if (oddCount == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

