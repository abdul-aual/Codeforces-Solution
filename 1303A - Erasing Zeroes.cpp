#include<iostream>
using namespace std;


int main(){
   int t;
   cin>>t;
   while(t--){
       string s;
       int first=-1,last=-1,countZeros=0;
       cin>>s;
       for(int i=0; i<s.size(); i++){
           if(s[i]=='1'){
               if(first==-1){
                   first=i;
               }
               last=i;

           }
       }

       if(first !=-1){
           for(int i=first; i<=last; i++){
               if(s[i]=='0') ++countZeros;
           }
       }
       cout<<countZeros<<endl;


   }

}
