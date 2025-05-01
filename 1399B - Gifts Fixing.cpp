#include <iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,minC=INT_MAX,minO=INT_MAX;
        long long moves=0;
        cin>>n;
        vector<int> candy(n),orange(n);
        for(int i=0; i<n; i++){
            cin>>candy[i];
            if(candy[i]<minC){
                minC=candy[i];
            }
        }
        for(int i=0; i<n; i++){
            cin>>orange[i];
            if(orange[i]<minO){
                minO=orange[i];
            }
        }
        for(int i=0; i<n; i++){

                int candyD=candy[i]-minC;
                int orangeD=orange[i]-minO;

                moves+=max(candyD,orangeD);
        }
        cout<<moves<<endl;




    }

}
