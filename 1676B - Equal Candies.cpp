#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,eaten=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n; i++){
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end() );
        for(int i=1; i<n; i++){
            eaten+=arr[i]-arr[0];

    }
    cout<<eaten<<endl;
}

}
