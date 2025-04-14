#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        string s1="abcdefgh";
        cin>>s;
        int digit=s[1]-'0';
        char c=s[0];
       for(int i=0; i<8; i++){
           if(i+1==digit) continue;
           cout<<c<<i+1<<endl;
       }
       for(int i=0; i<8; i++){
           if(s1[i]==c) continue;
           cout<<s1[i]<<digit<<endl;
       }
    }
}
