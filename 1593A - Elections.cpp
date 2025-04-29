#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(3);
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }
        int maxElement=*max_element(arr.begin(),arr.end());
        int max_count=count(arr.begin(),arr.end(),maxElement);
        if(max_count==3){cout<<1<<" "<<1<<" "<<1<<endl;}
        else if(max_count==2){
            for(int i=0; i<3; i++){
                if(arr[i]==maxElement) cout<<1;
                else cout<<maxElement - arr[i] +1;
                 if(i!=2)cout<<" ";
            }
            cout<<endl;
        }else{
            for(int i=0; i<3; i++){
                if(arr[i]==maxElement) cout<<0;
                else cout<<maxElement-arr[i]+1;
                if(i!=2)cout<<" ";
            }
            cout<<endl;
        }
    }
}
