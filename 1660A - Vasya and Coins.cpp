#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0) cout<<1<<endl;
        else{
            int total=a+(b*2);
            cout<<total+1<<endl;
        }
    }
}
