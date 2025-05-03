#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n;
    cin>>n;

    string s=to_string(n);
    for(int i=0; i<s.size(); i++){
        if(i==0){
            if(s[i]=='9') cout<<9;
            else if(s[i]=='8' || s[i]=='7' || s[i]=='6' || s[i]=='5')  cout<<9-(s[i]-'0');
            else  cout<<s[i];
        }else{
            if(s[i]=='9' || s[i]=='8' || s[i]=='7' || s[i]=='6' || s[i]=='5')  cout<<9-(s[i]-'0');
            else cout<<s[i];
        }
    }
    cout<<"\n";
}

