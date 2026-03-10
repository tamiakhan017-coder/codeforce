//https://codeforces.com/contest/1878/problem/A
#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    bool found = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == k) {
            found = true;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
