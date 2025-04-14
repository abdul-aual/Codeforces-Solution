#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,balance=0,donation_no=0;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]>=k) balance+=arr[i];
            if(arr[i]==0 && balance>0) {
                ++donation_no;
                --balance;
            }
        }
        cout<<donation_no<<endl;
    }

}
