#include <iostream>
#include<string>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int a,b,c,output;
         cin>>a>>b>>c;
         if(a==b){
             output= c;
         }
         else if(a==c){
             output=b;
         }
         else{
             output =a;
         }
         cout<<output<<endl;
     }
 }
