#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){

int n,m;
cin>>n;
vector<int> arr1(n);
for(int i=0; i<n; i++) cin>>arr1[i];
cin>>m;
vector<int> arr2(m);
for(int i=0; i<m; i++) cin>>arr2[i];

sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());

cout<<arr1[n-1]<<" "<<arr2[m-1]<<endl;



}

