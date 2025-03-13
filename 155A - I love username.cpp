#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,amazing=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int top=arr[0],bottom=arr[0];
    for(int i=1; i<n; i++){
        if(top<arr[i]){
            ++amazing;
            top=arr[i];
        }
        if(bottom>arr[i]){
            ++amazing;
            bottom=arr[i];
        }
    }
    cout<<amazing<<endl;

}
