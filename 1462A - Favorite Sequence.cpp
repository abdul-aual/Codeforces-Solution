#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int j=0;
        while(j<n/2){
            cout<<arr[j]<<" ";
            cout<<arr[n-1-j]<<" ";
            ++j;
        }
        if(n%2 !=0){
            cout<<arr[n/2];
        }
        cout<<endl;
    }
}
