#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int i=1;
        while(a+b<=n){
            int sum=a+b;
            if (a>=b){
                b=sum;
            }else{
                a=sum;
            }
            ++i;
        }
        cout<<i<<endl;
    }
}
