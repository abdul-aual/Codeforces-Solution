#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    ios::sync_with_stdio(false);cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,even=0,minDiv=INT_MAX;
        cin>>n;
        bool has_odd=false;
        vector<int> magic(n);
        for(int i=0; i<n; i++){
            cin>>magic[i];
            if(magic[i]%2==1) has_odd=true;
            if(magic[i]%2==0) ++even;
        }

        if(has_odd){
            cout<<even<<endl;
        }else{

            for(int i=0; i<n; i++){
                int x=magic[i];
                int DivCount=0;
                while(x%2==0){
                    x/=2;
                    ++DivCount;
                }
                minDiv=min(minDiv,DivCount);
            }
            cout<<minDiv + (n - 1)<<endl;
        }

    }
}




