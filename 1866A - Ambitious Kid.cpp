#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,minValue;
    cin>>n;
    vector<int> arr(n);
    cin>>arr[0];
    minValue=abs(arr[0]);
    for(int i=1; i<n; i++){
        cin>>arr[i];
        minValue=min(minValue,abs(arr[i]));
    }
    cout<<minValue<<endl;
}

