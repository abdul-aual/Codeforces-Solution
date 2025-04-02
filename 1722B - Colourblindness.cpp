#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        int n;
        bool flag = true;
        cin>>n>>s1>>s2;
        for(int i=0; i<n; i++){
            if((s1[i]=='R' && s2[i] !='R') || ( s1[i] !='R' && s2[i]=='R'  )   ){
                flag = false;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
}
