#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,maxHas=0,centre_x;
        string maxString;
        cin>>n>>m;
        for(int i=1; i<=n; i++){
            string s;
            cin>>s;
            int currentHas=count(s.begin(),s.end(),'#');
            if(currentHas>maxHas){
                maxHas=currentHas;
                maxString=s;
                centre_x=i;
            }
        }
        int lowerI=maxString.find('#') + 1;
        int higherI=maxString.rfind('#') + 1;

        if(lowerI  == higherI) cout<<centre_x<<" "<<lowerI<<endl;
        else{
            cout<<centre_x<<" "<<(lowerI + higherI)/2<<endl;
        }


    }
}

