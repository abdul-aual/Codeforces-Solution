#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n),b,c;
        for(int i=0; i<n; i++) cin>>arr[i];

        sort(arr.begin(),arr.end());
        int largest=arr[n-1];
        int c_size=count(arr.begin(),arr.end(),largest);
        int b_cize=n - c_size;

        if(c_size>0 && b_cize>0){
            cout<<b_cize<<" "<<c_size<<endl;
            for(int i=0; i<n - c_size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            while(c_size--){
                cout<<largest<<" ";
            }
            cout<<endl;

        }else{
            cout<<-1<<endl;
        }


    }
}
