//https://codeforces.com/problemset/problem/1926/A
#include <iostream>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int countA = 0, countB = 0;
    for (char c : s) {
        if (c == 'A') countA++;
        else countB++;
    }
    if (countA > countB) cout << "A" << endl;
    else cout << "B" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
