//https://codeforces.com/problemset/problem/1829/D
#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << (s[0] - '0') + (s[2] - '0') << endl;
    }
}


