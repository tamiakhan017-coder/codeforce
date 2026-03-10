#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
       cin>>s;
    int a,d;
    a=(s.begin(),s.end(),'A');
    d=n-a;
    if(a>d)
        cout<< "Anton" << endl;
    else if(d>a)
        cout<< "Danik" << endl;
    else
        cout<< "Friendship" <<endl;


    return 0;
}
