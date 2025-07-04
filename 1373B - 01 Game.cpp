#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.size();
        int zero=count(s.begin(),s.end(),'0');
        int one=len - zero;
        int maxMove=min(zero,one);
        if(maxMove%2==1) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
}
