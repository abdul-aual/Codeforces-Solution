#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,minDiff;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
         minDiff=arr[1]-arr[0];
        for(int i=2; i<n; i++){
            int currentDiff=arr[i]-arr[i-1];
            minDiff=min(minDiff,currentDiff);
        }
        cout<<minDiff<<endl;
    }

}
