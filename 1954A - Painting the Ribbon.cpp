#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,max_bi;
        cin>>n>>m>>k;
        max_bi=n - ceil((double)n/m);

        if(max_bi>k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }
}
