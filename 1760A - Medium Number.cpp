#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
     int mn=   min({a,b,c});
       int mx = max({a,b,c});

       cout<<((a+b+c)-(mn+mx))<<endl;
    }
}
