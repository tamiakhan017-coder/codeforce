#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        pos[val] = i; 
    }

    int m;
    cin >> m;
    long long vasya = 0, petya = 0;

    while (m--) {
        int query;
        cin >> query;
        vasya += pos[query];
        petya += (n - pos[query] + 1);
    }

    cout << vasya << " " << petya << endl;

    return 0;
}

