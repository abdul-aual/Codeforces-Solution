#include <iostream>
using namespace std;
#include <vector>
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int currentL=1,maxL=1;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            currentL++;
        }else{
            currentL=1;
        }
        maxL=max(currentL,maxL);
    }
    cout<<maxL<<endl;




}
