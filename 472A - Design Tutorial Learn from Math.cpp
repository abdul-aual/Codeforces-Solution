
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        if(n%4==0){
            cout<<n/2<<" "<<n/2<<endl;
        }else{
            cout<<n/2-1<<" "<<n/2+1<<endl;
        }
    }else{
        cout<<n-9<<" "<<9<<endl;
    }

}
