#include<iostream>
using namespace std;

int main()
{
    int n,groups=1;
    string current,previous;
    cin>>previous;
    for(int i=1;i<n;i++){
        cin>>current;
        if(current!=previous){
            groups++;
        }else{
            previous=current;
        }
    }
    cout<<groups<<endl;
    return 0;
}
