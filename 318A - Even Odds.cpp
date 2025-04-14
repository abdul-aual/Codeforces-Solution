#include <iostream>
using namespace std;

int main(){
    long long n,k,middle;
    cin>>n>>k;
    if(n%2==0) middle=n/2;
    else middle=n/2+1;
    if(k>middle){
        cout<<(k-middle)*2<<endl;
    }else{
        cout<<(2*k)-1<<endl;
    }
}
