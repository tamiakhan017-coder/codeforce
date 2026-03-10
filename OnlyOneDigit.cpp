//https://codeforces.com/problemset/problem/2126/A
#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    string x;
    cin >> x;
    char min_digit = '9';
    for (char d : x) {
        if (d < min_digit) {
            min_digit = d;
        }
    }
    cout << min_digit << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
