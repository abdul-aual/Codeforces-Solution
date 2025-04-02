#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


int main()
{
    int n,solve_need=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i+=2){
        solve_need+=arr[i+1]-arr[i];
    }
    cout<<solve_need<<endl;
}
