#include <iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,score=0;
        cin>>n;
        vector<int> arr(n);
        unordered_set<int> unique;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            unique.insert(arr[i]);
        }
        for(int value: unique){
            int countI=count(arr.begin(),arr.end(),value);
            score+=countI/2;
        }
        cout<<score<<endl;

    }
}
