#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,max_Quality=0,index=-1;
        cin>>n;
        vector<pair<int,int>> arr(n);
        for(int i=0; i<n; i++){
            int x,y;
            cin>>x>>y;
            arr[i]={x,y};
        }

         for(int i=0; i<n; i++){
            if(arr[i].first<=10){
                if(arr[i].second>max_Quality){
                    max_Quality=arr[i].second;
                    index=i+1;
                }
            }
        }
        cout<<index<<endl;

    }
}
