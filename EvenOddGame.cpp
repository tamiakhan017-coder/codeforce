#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.rbegin(), a.rend());

    long long alice = 0, bob = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] % 2 == 0) alice += a[i];
        } else {
            if (a[i] % 2 != 0) bob += a[i];
        }
    }

    if (alice > bob) cout << "Alice" << endl;
    else if (bob > alice) cout << "Bob" << endl;
    else cout << "Tie" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

