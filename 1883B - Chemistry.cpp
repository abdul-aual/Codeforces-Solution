#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,k;
       string s;
       cin>>n>>k>>s;
       int alp[26]={0};
       for(int i=0; i<n; i++){
           int num = s[i]-'a';
           alp[num]++;
       }
       int odd=0;
       for(int i=0; i<26; i++){
           if(alp[i]%2 !=0) ++odd;
       }

       if(k>=odd || k+1==odd){
          cout<<"YES"<<endl;

       }else{
           cout<<"NO"<<endl;
       }

    }
}









