//https://codeforces.com/problemset/problem/2191/A
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    if (sum % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
