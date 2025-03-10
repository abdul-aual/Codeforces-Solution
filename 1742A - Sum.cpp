#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,count;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c){count=1;}
        else if(a+c==b){count=1;}
        else if(b+c==a){count=1;}
        else{count=0;}

        if(count==1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}
