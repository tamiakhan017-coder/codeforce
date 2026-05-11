#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;
    int M = max(Y, W);
    int A = 6 - M + 1;
    
   
    string results[] = {"", "1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cout << results[A] << endl;
    
    return 0;
}

