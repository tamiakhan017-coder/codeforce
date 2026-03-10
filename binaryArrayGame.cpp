#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ones=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1)
            ones++;
    }
    if(ones==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
