#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,m,a;
    cin>> n >> m >> a;
    long long flagstoneN = (n+a-1)/a;
    long long flagstoneM = (m+a-1)/a;
    cout<< flagstoneN * flagstoneM;
    return 0;
}
