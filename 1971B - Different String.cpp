#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool is_same=true;
        for(int i=1; i<s.size(); i++){
            if(s[i-1] != s[i]) is_same=false;
        }
        if(is_same){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
          string duplicate= s;
          sort(duplicate.begin(),duplicate.end());
            if(s==duplicate){
                reverse(s.begin(),s.end());
                cout<<s<<endl;
            }else{
                cout<<duplicate<<endl;
            }
        }

        }

    }

