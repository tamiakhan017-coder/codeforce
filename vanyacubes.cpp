#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int height=0;
    int cubes_needed=0;
    int total_used=0;
    while(true){
        height++;
        cubes_needed+=height;
        total_used+=cubes_needed;
        if(total_used>n){
            cout<<height-1<<endl;
            break;
        }
    }
    return 0;
}
