#include <iostream>
using namespace std;

int main()
{
    short t;
    cin>>t;
    while(t--){
        short n,m;
        cin>>n>>m;
        short diff=n-m;
        if(diff<0 || diff%2!=0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
