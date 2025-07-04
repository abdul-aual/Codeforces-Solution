#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
       vector<int> arr(n);
       for(int i=0; i<n; i++){
           cin>>arr[i];
       }

int first_i = find(arr.begin(), arr.end(), 1) - arr.begin() + 1;
int last_i = arr.size() - (find(arr.rbegin(), arr.rend(), 1) - arr.rbegin());
 int needSec=last_i - first_i + 1;

 if(x>=needSec) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

    }
}

