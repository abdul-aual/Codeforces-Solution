#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c;

        int minV=min(a,b);
        int maxV=max(a,b);

        int Range = (maxV - minV)*2;

        if(c>Range || maxV>Range) cout<<-1<<endl;
        else{
            if(c>Range/2) d= c - (maxV - minV);
            else d= c + (maxV - minV);
            cout<<d<<endl;
        }
    }
}
