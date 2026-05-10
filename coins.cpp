//https://codeforces.com/problemset/problem/1061/A
#include <iostream>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    // Use integer division; if there's a remainder, add one more coin
    if (s % n == 0) {
        cout << s / n << endl;
    } else {
        cout << (s / n) + 1 << endl;
    }
    return 0;
}

