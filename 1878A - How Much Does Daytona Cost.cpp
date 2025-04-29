#include <iostream>
using namespace std;
#include<vector>

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        bool k_found=false;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==k){
                k_found=true;
            }
        }
        cout<<(k_found?"YES":"NO")<<endl;
    }
}
