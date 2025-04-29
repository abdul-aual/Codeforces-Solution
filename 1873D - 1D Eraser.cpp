#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,operation=0;
        string s;
        cin>>n>>k>>s;

        int i=0;
        while(i<s.size()){
            if(s[i]=='B'){
                ++operation;
                i+=k-1;
            }
            ++i;
        }
        cout<<operation<<endl;
    }
}
