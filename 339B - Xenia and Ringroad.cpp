#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    long long totalT=0;
    cin >> n >> m;

    vector<int> arr(m+1);
    for(int i=1; i<=m; i++){
        cin>>arr[i];
    }
    int current_pos=1;
    for(int i=1; i<=m; i++){
        int target_pos=arr[i];
        if(target_pos>= current_pos){
            totalT+=(long long)(target_pos - current_pos);
        }else{
            int t1=n - current_pos;
            int t2=target_pos;
            totalT+=(long long)(t1 + t2);
        }
        current_pos=arr[i];
    }
    cout<<totalT<<endl;
}
