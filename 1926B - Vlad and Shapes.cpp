#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> grid(n);
        for(int i=0; i<n; i++){
            cin>>grid[i];
        }
        for(int i=0; i<n; i++){
            int count1=count(grid[i].begin(),grid[i].end(),'1');
            if(count1>0){
                int count2=count(grid[i+1].begin(),grid[i+1].end(),'1');
                    if(count1 == count2) cout<<"SQUARE"<<endl;
                    else cout<<"TRIANGLE"<<endl;
                    break;

            }
        }

    }
}
