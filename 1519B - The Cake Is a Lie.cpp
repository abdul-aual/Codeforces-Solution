
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int x_cost=abs(n-1);
        int y_cost=abs(m-1)*n;
        if((x_cost+y_cost)==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
