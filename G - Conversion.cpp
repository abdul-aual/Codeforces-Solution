#include <iostream>
#include<cctype>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i= 0; i<s.size(); i++){
        if(s[i]==',') s[i]=' ';
        else if(islower(s[i])) {
            char c=toupper(s[i]);
            s[i]=c;
        }else if(isupper(s[i])){
            char c=tolower(s[i]);
            s[i]=c;
        }
    }
    cout<<s<<endl;
}

