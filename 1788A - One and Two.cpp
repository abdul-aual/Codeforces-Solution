#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,two=0,one=0,left=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==2) ++two;
            if(arr[i]==1) ++ one;
        }
        if(one==n) cout<<1<<endl;
        else if(two==n){
            if(two%2==0) cout<<two/2<<endl;
            else cout<<-1<<endl;
        }else if(two%2==0){
            for(int i=0; i<n; i++){
                if(arr[i]==2) ++left;
                if(left == (two/2) ){
                    cout<<i+1<<endl;
                    break;
                }
            }

        }else{
            cout<<-1<<endl;
        }

    }















}
