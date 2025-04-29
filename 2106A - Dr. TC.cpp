#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,one_count=0;
        string s;
        cin>>n>>s;

        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                one_count+= count(s.begin(),s.end(),'1')+1;
            }else if(s[i]=='1'){
                one_count+=count(s.begin(),s.end(),'1')-1;
            }
        }
        cout<<one_count<<endl;
    }

}
