#include <iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;

    int n=s.length();
    int m=t.length();
    int same=0;
    for(int i=n-1, j=m-1; i>=0 && j>=0; --i,--j   ){

        if(s[i]==t[j]){
            same+=2;
        }else{
            break;
        }
    }

    cout<<n+m-same<<endl;
}
