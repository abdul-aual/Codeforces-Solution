#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k>>s;
        int zeroCount = count(s.begin(),s.end(),'0');
        int oneCount = n - zeroCount;
        int min=abs(zeroCount - oneCount)/2;

        if( k>=min &&  min%2==k%2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
}
