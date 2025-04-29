
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,less_gap,lowerI,upperI;
        cin>>n;
        vector<int> arr1(n),arr2(n);
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        arr2=arr1;
        sort(arr2.begin(),arr2.end());
        if(arr2 != arr1){
            cout<<0<<endl;
            continue;
        }
        less_gap=arr1[1]-arr1[0];
        lowerI=1;
        upperI=2;

        for(int i=2; i<n; i++){
            int currentGap=arr1[i]-arr1[i-1];
            if(currentGap<less_gap){
                less_gap=currentGap;
                lowerI=i;
                upperI=i+1;
            }
        }
        int result =0;

            int lowerValue=arr1[lowerI-1];
            int upperValue=arr1[upperI-1];

        while(less_gap>=0){
            ++lowerValue;
            --upperValue;
            less_gap=upperValue - lowerValue;
            ++result;
        }
        cout<<result<<endl;
    }















}
