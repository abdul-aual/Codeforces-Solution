#include <iostream>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t;

    if(t==10){
        if(n==1) cout<<-1<<endl;
        else{
            for(int i=0; i<n; i++){
                if(i==0) s+='1';
                else s+='0';
            }
            cout<<s<<endl;
        }
        return 0;
    }

    for(int i=0; i<n; i++){
        s+=(t + '0');
    }
    cout<<s<<endl;


}
