#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<n/2; i++){
        if(s[i]==s[n-1-i]){
            break;
        }else{
            ++flag;
        }
    }
    cout<<s.size()-2*flag<<endl;
    }
}
