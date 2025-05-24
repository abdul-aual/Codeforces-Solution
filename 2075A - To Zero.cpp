#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,result=0;
        cin>>n>>k;

        if(n%2==0 && k%2==0) result=ceil((double)n/k);
        else if(n%2==k%2){
            ++result;
            n-=k;
            result+=ceil((double)n/(k-1));
        }else if(n%2==0 && k%2 !=0){
            result=ceil((double)n/(k-1));
        }else{
            ++result;
            n-=(k - 1);
            result+=ceil((double)n/k);
        }
        cout<<result<<endl;
    }

}
