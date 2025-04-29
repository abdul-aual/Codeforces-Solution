#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        bool flag=true;
        cin>>n>>s;
        vector<char> s0,s1;
        s0.push_back(s[0]);
        s1.push_back(s[1]);
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }else if(n==2){
            if(s[0]==s[1]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            continue;
        }else if(s[0]==s[1]){
            cout<<"NO"<<endl;
            continue;
        }



        for(int i=2; i<s.size(); i++){
            if(i%2==0){
                if(find(s1.begin(), s1.end(), s[i]) != s1.end()) flag = false;
                else s0.push_back(s[i]);
            }else{
                if(find(s0.begin(),s0.end(),s[i]) !=s0.end() ) flag=false;
                else s1.push_back(s[i]);

            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
}
