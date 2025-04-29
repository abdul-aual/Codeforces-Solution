#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n,even=0,odd=0,evenIndex,oddIndex;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            ++even;
            evenIndex=i+1;
        }else{
            ++odd;
            oddIndex=i+1;
        }
    }

    if(even==1){
        cout<<evenIndex<<endl;
    }else{
        cout<<oddIndex<<endl;
    }

}
