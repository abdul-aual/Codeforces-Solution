#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        cin>>arr[0];
        int long_distance = arr[0]-0;
        for(int i=1; i<n; i++){
            cin>>arr[i];
            int current_distance = arr[i]-arr[i-1];
            if(current_distance>long_distance) long_distance=current_distance;

        }
        int d_destination=2*(x-arr[n-1]);

        cout<<(d_destination>long_distance?d_destination:long_distance)<<endl;


    }
}
