#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,solved=0;
        cin>>n;
        vector<char> arr(4*n,0);
        unordered_set<char> unique;
        for(int i=0; i<4*n; i++){
            cin>>arr[i];
           if(arr[i] !='?') unique.insert(arr[i]);
        }
        for(char c:unique){
            int currentCount = count(arr.begin(),arr.end(),c);
            solved+=min(currentCount,n);
        }
        cout<<solved<<endl;

    }
}
