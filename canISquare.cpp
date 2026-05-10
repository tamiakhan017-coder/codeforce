//https://codeforces.com/contest/1915/problem/C
#include <iostream>

using namespace std;

int main() {
    long long n, ans;
    if (!(cin >> n))
        return 0;
    if (n % 2 == 0) {
        ans = n / 2;
    } else {
        ans = -(n + 1) / 2;
    }

    long long squaredAns = ans * ans;
    cout << squaredAns << endl;

    return 0;
}


