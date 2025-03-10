#include<iostream>
using namespace std;
int main()
{
    string s,t;
    int m,n;
    cin>>s>>t;
     m=s.size();

    for(int i=0; i<m; i++)
    {
        if(s[i] == t[m-i-1] )
        {
            n=1;

        }
        else
        {
            n=0;
            break;
        }
    }
    if(n==0) cout<<"NO"<<endl;
    else if(n==1) cout<<"YES"<<endl;


}
