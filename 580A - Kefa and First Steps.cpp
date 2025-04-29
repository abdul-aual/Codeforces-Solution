#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n,maximum_len=0,curentL=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        if(arr[i-1]<=arr[i]){
             curentL++;
            maximum_len=max(maximum_len,curentL);
        }else{
            curentL=0;
        }
    }
    cout<<maximum_len+1<<endl;

}

