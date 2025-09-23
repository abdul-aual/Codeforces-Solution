#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int lowerRange=n-(k-1);
        int sum = (k*(n+lowerRange))/2;
        if(sum%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
