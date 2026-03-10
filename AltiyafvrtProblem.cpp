#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    char s[105];
    cin >> s;

    char max_char = 'a';
    for (int i = 0; i < n; i++) {
        if (s[i] > max_char) {
            max_char = s[i];
        }
    }


    cout << (max_char - 'a' + 1) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

