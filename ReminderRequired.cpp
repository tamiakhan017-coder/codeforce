#include <iostream>
#include <set>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    if (k > 42) {
        cout << "No" << endl;
        return 0;
    }

    set<long long> s;
    for (long long i = 1; i <= k; i++) {
        if (s.count(n % i)) {
            cout << "No" << endl;
            return 0;
        }
        s.insert(n % i);
    }

    cout << "Yes" << endl;
    return 0;
}

