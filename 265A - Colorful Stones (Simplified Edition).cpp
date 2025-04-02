#include<iostream>
using namespace std;


int main(){
   string s,t;
   int position=1,j=0;
   cin>>s>>t;
   for(int i=0; i<t.size(); i++){
       if(t[i]==s[j]){
           ++position;
           ++j;
       }
   }
   cout<<position<<endl;
}
