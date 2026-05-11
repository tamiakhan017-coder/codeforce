#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    int l = -1;
    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) {
            l = i;
            break;
        }
    }

    if (l != -1) {
        int r = l;
        for (int i = l; i < n; i++) {
            if (p[i] == l + 1) {
                r = i;
                break;
            }
        }
        reverse(p.begin() + l, p.begin() + r + 1);
    }

    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

