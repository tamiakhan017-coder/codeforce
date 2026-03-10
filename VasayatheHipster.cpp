#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;;
    int d_days , sm_days;
    d_days = min(a, b);
    sm_days = abs(a-b)/2;
    cout<< d_days << " " << sm_days << endl;

    return 0;
}
