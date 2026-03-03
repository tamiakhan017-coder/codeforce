#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long x=sqrt(n);
    if(x*x==n){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }


    return 0;
}
