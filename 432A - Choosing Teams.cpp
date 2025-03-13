#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k,elegible_member=0;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<=5-k){
            ++elegible_member;
        }
    }
    cout<<elegible_member/3<<endl;

}
