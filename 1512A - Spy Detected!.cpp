#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
    cin >> n;
    vector<int> arr(n);


    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]) {
            continue;
        } else {
            if(i==n-1) {
                cout<<n<<endl;
                break;
            }
            else if(arr[i] == arr[i+1]) {
                cout << i << endl;
                break;
            } else {
                cout << i+1 << endl;
                break;
            }
        }
    }
    }
    return 0;
}

