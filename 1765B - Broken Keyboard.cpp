#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        bool canType = true;
        int press=1;
        cin>>n>>s;
        for(int i=0; i<n;){
            if(press%2!=0){
                ++press;
                ++i;
            }else{
                if(i+1<n && s[i]==s[i+1] ){
                    ++press;
                    i+=2;
                }else{
                    canType=false;
                    break;
                }
            }
        }
        cout<<(canType?"YES":"NO")<<endl;
    }
}
