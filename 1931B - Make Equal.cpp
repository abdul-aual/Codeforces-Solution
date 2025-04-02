#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,level_value,sum=0,in_hand=0;
        bool result =true;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        level_value=sum/n;
        for(int i=0; i<n; i++){
            if(arr[i]<level_value && in_hand+arr[i]<level_value   ){
                result = false;
                break;
            }else if(arr[i]>=level_value){
                in_hand+=arr[i]-level_value;
            }else if(arr[i]<level_value && in_hand+arr[i]>=level_value){
                in_hand-=level_value-arr[i];
            }else{
                result=false;
                break;
            }
        }
        cout<<(result?"YES":"NO")<<endl;

    }
}

