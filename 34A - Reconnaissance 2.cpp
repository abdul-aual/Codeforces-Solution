#include<iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n,lowerI,upperI;
    bool flag = false;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minDiff=abs(arr[0]-arr[n-1]);
    for(int i=1; i<n; i++){
        int currentDiff=abs(arr[i]-arr[i-1]);
        if(currentDiff<minDiff){
            minDiff=currentDiff;
            flag=true;
            lowerI=i;
            upperI=i+1;
        }
    }
    if(flag){
        cout<<lowerI<<" "<<upperI<<endl;
    }else{
        cout<<1<<" "<<n<<endl;
    }


}
