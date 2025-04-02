#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> arr;
        cin>>n;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            for(int j=0; j<4; j++){
                if(s[j]=='#'){
                    arr.push_back(j+1);
                }
            }
        }
        reverse(arr.begin(),arr.end());
        for(int n:arr){
            cout<<n<<" ";
        }
        cout<<"\n";
    }
}
