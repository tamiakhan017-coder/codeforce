//https://codeforces.com/problemset/problem/431/A
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> calories(5);
    for (int i = 1; i <= 4; i++) {
        cin >> calories[i];
    }

    string s;
    cin >> s;

    long long total_calories = 0;
    for (char c : s) {
        int strip = c - '0';
        total_calories += calories[strip];
    }

    cout << total_calories << endl;
    return 0;
}
