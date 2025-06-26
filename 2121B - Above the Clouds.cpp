#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        bool found=false;

        for(int i=1; i<n-1; i++){
            int s_count=count(s.begin(),s.end(),s[i]);
            if(s_count>1){
                found = true;
                break;
            }
        }

        cout<<(found? "YES":"NO")<<endl;
    }
}
