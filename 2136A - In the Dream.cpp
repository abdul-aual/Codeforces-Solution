#include <iostream>
using namespace std;

bool fun(int first,int second){
    int n;
    if(first>second){
        if(first%2==0) n=first/2 -1;
        else n=first/2;

        if(n<=second){
            return true;
        }else return false;

    }else if(second>first){
        if(second%2==0) n=second/2 -1;
        else n=second/2;
        if(n<=first) return true;
        else return false;
    }else return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,n;
        cin>>a>>b>>c>>d;
         c=abs(c-a);
         d=abs(d-b);

        bool firstH=fun(a,b);
        bool secondH=fun(c,d);

        if(firstH && secondH) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

}


