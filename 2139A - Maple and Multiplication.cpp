#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
   int a,b;
   cin>>a>>b;
   if(a==b) cout<<0<<endl;
   else if(a==1 || b==1) cout<<1<<endl;
   else if(a%b==0 || b%a==0) cout<<1<<endl;
   else cout<<2<<endl;

}}
