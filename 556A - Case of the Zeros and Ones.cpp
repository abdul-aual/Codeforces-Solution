#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,zero=0,one=0;
    string s;
    cin>>n>>s;

    for(int i=0; i<n; i++){
        if(s[i]=='0') ++zero;
        else ++one;
    }

    cout<<n - 2*min(zero,one)<<endl;

}
