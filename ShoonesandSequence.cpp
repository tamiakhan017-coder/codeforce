#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = k - 1; i < n; i++) {
        if (a[i] != a[k - 1]) {
            cout << -1 << endl;
            return 0;
        }
    }
    int ans = 0;
    for (int i = k - 2; i >= 0; i--) {
        if (a[i] != a[k - 1]) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

