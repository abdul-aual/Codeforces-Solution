#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        if(s=="yes" || s=="YES" || s=="Yes" || s=="yEs" || s=="yeS" || s=="yES" || s=="YEs" || s=="YeS"){
            cout<<"YES"<<endl;
        }else{
            cout<<"N0"<<endl;
        }
    }
}
