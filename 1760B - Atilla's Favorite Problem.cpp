#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       string s;
       cin>>n>>s;
       sort(s.begin(),s.end());
       int result=s[n-1]-'a'+1;
       cout<<result<<endl;
   }

}
