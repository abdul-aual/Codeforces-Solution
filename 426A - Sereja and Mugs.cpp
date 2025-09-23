#include <iostream>
using namespace std;

int main()
{
    int n,s,largeV,var,sum=0;
    cin>>n>>s;
    largeV = 1;
    for(int i=0; i<n; i++){
        cin>>var;
        if(var>largeV) largeV =var;
        sum+=var;
    }
    if(sum - largeV<=s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
