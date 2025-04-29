
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="aeiou";
        string result="";
        for(int i=0; i<n;i++){
            result+=s[i%5];
        }
        sort(result.begin(),result.end());
        cout<<result<<endl;
    }
}
