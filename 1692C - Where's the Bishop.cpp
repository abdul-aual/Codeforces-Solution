#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<string> s(8);
        for(int i=0; i<8; i++){
            cin>>s[i];
        }
        for(int i=1; i<8; i++){
            int count1=count(s[i-1].begin(),s[i-1].end(),'#');
            int count2=count(s[i].begin(),s[i].end(),'#');
            if(count1==2 && count2==1){
                int col=s[i].find('#');
                cout<<i+1<<" "<<col+1<<endl;
                break;
            }
        }
    }
}
