#include<iostream>
using namespace std;
int main(){

    int m,n;
    cin>>n>>m;
    bool iscolor=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;
            cin>>c;
            if(c=='M' || c=='C' || c=='Y') iscolor=true;
        }
    }

    cout<<(iscolor?"#Color":"#Black&White")<<endl;




}
