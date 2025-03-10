#include <iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,arr[2000],even=0,odd=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n;i++){
            if(arr[i]%2==0) ++even;
            else ++odd;
        }
        if(even>0 && odd>0){cout<<"YES"<<endl;}
        else if(odd>0 && n%2==1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }



}

