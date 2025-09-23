#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool isOne = false;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                isOne = true;
                break;
            }
        }
        cout<<(isOne? 1:s.length())<<endl;
    }
}
