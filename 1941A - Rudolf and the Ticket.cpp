#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k,way=0;
        cin>>n>>m>>k;
        vector<int> left(n),right(m);
        for(int i=0; i<n; i++) cin>>left[i];
        for(int i=0; i<m; i++) cin>>right[i];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(left[i] + right[j] <=k) ++way;
            }
        }
        cout<<way<<endl;
    }
}
