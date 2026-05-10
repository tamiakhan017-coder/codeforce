//https://codeforces.com/problemset/problem/432/A
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;

    int eligibleCount = 0;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        if (y + k <= 5) {
            eligibleCount++;
        }
    }
    cout << eligibleCount / 3 << endl;

    return 0;
}

