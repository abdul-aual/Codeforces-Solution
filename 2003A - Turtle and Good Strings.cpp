#include <iostream>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--){
     int n;
     string s;
     cin>>n>>s;
     if(s[0]!=s[n-1]) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
}
