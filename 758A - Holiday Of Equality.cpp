#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,count = 0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxElement = *max_element(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        if(arr[i]<maxElement){
            count+=maxElement-arr[i];
        }
    }
    cout<<count<<endl;

}
