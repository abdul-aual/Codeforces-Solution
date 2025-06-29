#include <iostream>
#include<utility>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>> arr(n);
        bool shower=false;

        for(int i=0; i<n; i++){
            cin>>arr[i].first>>arr[i].second;
        }

        for(int i=0; i<n; i++){
            int lower,higher;
            if(i==0){
                lower=0;
                higher=arr[i].first;
            }else{
                lower=arr[i-1].second;
                higher=arr[i].first;
            }

            int time_got = higher - lower;
            if(time_got >= s){
                shower=true;
                break;
            }

        }

        if(!shower){
            int last_duration = m - arr[n-1].second;
            if(last_duration>=s) shower=true;
        }

        cout<<(shower?"YES":"NO")<<endl;

    }
}
