#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;

// Custom comparator to sort strings by length
bool compareByLength(const string &a, const string &b) {
    return a.length() < b.length();
}

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end(), compareByLength);

    for (int i = 0; i < n - 1; i++) {
        if (s[i+1].find(s[i]) == string::npos) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for (const string &str : s) {
        cout << str << endl;
    }

    return 0;
}

