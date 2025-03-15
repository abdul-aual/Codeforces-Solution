#include<iostream>
using namespace std;


int main(){
   int t;
   cin>>t;
   while(t--){
        string pi="314159265358979323846264338327";
        string s;
        int right=0;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]==pi[i]){
                ++right;
            }else break;
        }
        cout<<right<<endl;
   }

}
