#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) 
        return 0;

    while (t--) {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }

    return 0;
}

