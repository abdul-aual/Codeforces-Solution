#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int diff=abs(a-b);

        if(diff%2==0) cout<<"Bob\n";
        else cout<<"Alice\n";
    }
}
