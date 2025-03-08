#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int b,c,h,slice;
        cin>>b>>c>>h;
        if(b==c+h || b-1==c+h || b<c+h) slice =b+(b-1);
        else{
            slice=2*(c+h)+1;
        }

    cout<<slice<<endl;



    }



}
