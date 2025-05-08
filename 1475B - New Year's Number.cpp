#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=n/2020;
        int rem=n%2020;
        if(rem<=res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
