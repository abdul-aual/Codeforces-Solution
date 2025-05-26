#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum=0,n,moves=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%3==0) moves=0;
        else if(sum%3==2) moves=1;
        else{
            bool flag=false;
            for(int i=0; i<n; i++){
                if(arr[i]%3==1){
                    flag=true;
                    break;
                }
            }
            if(flag) moves=1;
            else moves=2;
        }
        cout<<moves<<endl;
    }
}
