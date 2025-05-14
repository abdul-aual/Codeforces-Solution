#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> software(n);
        for(int i=0; i<n; i++) cin>>software[i].first;
        for(int i=0; i<n; i++) cin>>software[i].second;
        sort(software.begin(),software.end());

        for(int i=0; i<n; i++){
            if(software[i].first<=k){
                k+=software[i].second;
            }
        }
        cout<<k<<endl;
    }
}
