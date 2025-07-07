#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,one=0;
        long long value_gain=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1)++one;
            else{
                value_gain+= arr[i]-1;
            }
        }
        if(value_gain<one || n==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
