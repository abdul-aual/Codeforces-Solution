#include <iostream>
using namespace std;
#include<vector>
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> arr;
        cin>>n;
        int pos =0;
        for(int i=1; i<=n; i++){
            if(i%3==0 || i%10==3){
                ++n;
                continue;
            }
            arr.push_back(i);

        }
        cout<<arr.back()<<endl;
    }


}
