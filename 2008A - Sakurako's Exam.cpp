#include<iostream>
using namespace std;

void solve(){
    int a,b,sum;
    cin>>a>>b;
    sum=a+(b*2);
    if(sum%2 == 0 && (b%2==0 || a>0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
