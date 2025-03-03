#include<iostream>
#include<vector>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(2*n);
        vector<int> even;
        vector<int> odd;
        for(int i=0; i<2*n; i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }else{
                odd.push_back(arr[i]);
            }
        }
        if(even.size()==odd.size()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }







}
