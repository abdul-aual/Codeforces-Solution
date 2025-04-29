#include <iostream>
#include<algorithm>
using namespace std;
#include<vector>

int main()
{
    int n,sum=0,my_taking=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());


    for(int i=0; i<n; i++){
        my_taking+=arr[i];

        if(my_taking>(sum/2)){
            cout<<i+1<<endl;
            break;
        }
    }
}
