#include<algorithm>
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0; i<n; i++){
        cin>>prices[i];
    }
    sort(prices.begin(),prices.end());
    int Q;
    cin>>Q;

    while(Q--){
        int m;
        cin>>m;
        int can_buy=upper_bound(prices.begin(),prices.end(),m) - prices.begin();
        cout<<can_buy<<endl;
    }
}

