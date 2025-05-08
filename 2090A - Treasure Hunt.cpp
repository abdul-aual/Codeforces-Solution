#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,a;
        cin>>x>>y>>a;
        if(a%(x+y)==0) cout<<"NO"<<endl;
        else {
            int rem=a%(x+y);
            if(rem<x) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    }
}
