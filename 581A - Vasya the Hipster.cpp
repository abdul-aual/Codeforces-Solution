#include <iostream>
using namespace std;
int main(){

    int a,b,sameColor,diffColor;
    cin>>a>>b;

    if(a>b){
        diffColor=b;
        sameColor=(a-b)/2;

    }else if(b>a){
        diffColor=a;
        sameColor=(b-a)/2;
    }else{
        diffColor=a;
        sameColor=0;
    }
    cout<<diffColor<<" "<<sameColor<<endl;


}
