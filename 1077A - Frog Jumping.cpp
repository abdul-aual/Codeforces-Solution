#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        if(k%2==0){
            cout<<(a-b)*(k/2)<<endl;
        }else{
            long long a_coEff=(k/2)+1;
            cout<<a_coEff*a-b*(k/2)<<endl;

        }

    }

}
