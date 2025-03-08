#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
    cin>>c;
    string s="codeforces";

    int count_char=count(s.begin(),s.end(),c);
    if(count_char>0) cout<<"YES\n";
    else cout<<"NO\n";

    }



}
