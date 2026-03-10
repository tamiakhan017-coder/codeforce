//https://codeforces.com/problemset/problem/1858/A
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << (n - 1) * n * (n + 1) / 6 + n << endl;
    return 0;
}
