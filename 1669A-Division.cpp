#include <iostream>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int r,Div;
    cin>>r;
    if(r>=1900){
        Div=1;
    }else if(r>=1600){
        Div=2;
    } else if(r>=1400){
        Div=3;
    }else{
        Div=4;
    }
    cout<<"Division "<<Div<<endl;
}


    return 0;
}

