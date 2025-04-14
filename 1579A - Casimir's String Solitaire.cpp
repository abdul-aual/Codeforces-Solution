#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int countA,countB,countC;
        cin>>s;
        countA=count(s.begin(),s.end(),'A');
        countB=count(s.begin(),s.end(),'B');
        countC=count(s.begin(),s.end(),'C');
        if(s.size()%2 !=0) cout<<"NO"<<endl;
        else if(countA+countC== countB) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
