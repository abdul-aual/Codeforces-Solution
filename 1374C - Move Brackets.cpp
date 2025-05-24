#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,open=0,moves=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='(' ) ++open;
            else if(s[i]==')'){
                if(open>0){
                    -- open;
                }else{
                    ++moves;
                }

            }


        }
        cout<<moves<<endl;

    }
}
