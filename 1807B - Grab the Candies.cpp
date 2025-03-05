#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,Mihai_candy=0,Bianca_candy=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==0) Mihai_candy+=arr[i];
            else Bianca_candy+=arr[i];
        }
        cout<<((Mihai_candy>Bianca_candy)? "YES":"NO")<<endl;
    }
}

