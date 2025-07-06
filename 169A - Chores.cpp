#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int lower = arr[b - 1];
    int higher=arr[n - a];
    cout<<higher - lower<<endl;
}
