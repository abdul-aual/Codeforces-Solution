#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,maxSeq=1;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int lowerI=0;
        int higherI=0;
        for(int i=1; i<n; i++){
            if(arr[i]-arr[i-1]<=k){
                ++higherI;
                int numT=higherI - lowerI + 1;
                maxSeq=max(maxSeq,numT);
            }else{
                lowerI=i;
                higherI=i;
            }
        }
        cout<<n-maxSeq<<endl;
    }
}
