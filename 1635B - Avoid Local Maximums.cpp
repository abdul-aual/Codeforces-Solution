#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    ios::sync_with_stdio(false);cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,operation=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=1; i<n-1; i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                ++operation;
                if(i+2<n){
                    a[i+1]=max(a[i],a[i+2]);
                }else{
                    a[n-1]=a[n-2];
                }
            }
        }
        cout<<operation<<endl;
        for(int x:a) cout<<x<<" ";
        cout<<endl;
    }
}




