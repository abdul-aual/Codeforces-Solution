#include <iostream>
#include <string>
using namespace std;

int main() {
short t;
cin>>t;
while(t--){
        string s;
    int sum=0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        sum += s[i]-'0';
    }
    cout<<sum<<endl;
}
}

