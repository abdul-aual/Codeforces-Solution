#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=true;
        vector<int> a(n);
        unordered_set<int> occupied;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i==0){
                occupied.insert(a[i]);
                continue;
            }
            if(occupied.count(a[i]-1) || occupied.count(a[i]+1)){
                occupied.insert(a[i]);
            }else{
                flag = false;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }


}
