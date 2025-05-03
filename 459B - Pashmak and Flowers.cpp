#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    cin>>arr[0];
    int maxValue=arr[0];
    int minValue=arr[0];
    for(int i=1; i<n; i++){
        cin>>arr[i];
        if(arr[i]>maxValue) maxValue=arr[i];
        if(arr[i]<minValue) minValue=arr[i];
    }

    int countMax=count(arr.begin(),arr.end(),maxValue);
    int countMin=count(arr.begin(),arr.end(),minValue);
    cout <<maxValue - minValue<<" ";
    cout<<(maxValue == minValue ? (long long)n*(n-1)/2:(long long)countMax * countMin)<<endl;
}

