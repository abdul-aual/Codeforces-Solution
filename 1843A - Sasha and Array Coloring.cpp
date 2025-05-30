
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,max_cost=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(int i=0; i<n/2; i++){
            int diff = arr[n - 1 - i] - arr[i];
            max_cost+=diff;
        }
        cout<<max_cost<<endl;
    }
}
