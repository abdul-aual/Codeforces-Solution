#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s1;
        cin>>n>>s1;
        string s2=s1;
        sort(s2.begin(),s2.end());
        cout<<(s1==s2? "YES":"NO")<<endl;
    }

}
