#include <iostream>
using namespace std;
int main()
{

    int n,r=0,g=0,b=0;
    string s;
    cin>>n;
    cin>>s;

    for(int i=1; i<n; i++)
    {
        if(s[i-1]==s[i])
        {
            if(s[i]=='R') ++r;
            else if (s[i]=='G') ++g;
            else ++b;

        }



    }
    cout<<r+g+b<<endl;


}
