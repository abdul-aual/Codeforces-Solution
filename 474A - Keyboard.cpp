#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    char c;
    cin>>c;
    string m;
    cin>>m;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";

    if(c=='R'){
        for(int i=0; i<m.size(); i++){
            int index=s.find(m[i]);
            cout<<s[index - 1];

        }
        cout<<endl;
    }else{
        for(int i=0; i<m.size(); i++){
            int index=s.find(m[i]);
            cout<<s[index+1];
        }
        cout<<endl;

    }
}
