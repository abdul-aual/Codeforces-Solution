#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && a==1) cout<<3<<endl;
    else if((a==b && b==1) || (b==c && c==1) ) cout<<(a==1? 2*c:2*a)<<endl;
    else if(a==c && c==1) cout<<b+2<<endl;
    else if(a==1 || b==1 || c==1){
        if(a==1) cout<<(b+1)*c<<endl;
        else if(c==1) cout<<(1+b)*a<<endl;
        else{
            int num1=(a+1)*c;
            int num2=a*(1+c);
            cout<<max(num2,num1)<<endl;
        }
    }else{
        cout<<a*b*c<<endl;
    }
}

/* --------- RAW version is below --------*/
/*
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && a==1) cout<<3<<endl;
    else if((a==b && b==1) || (b==c && c==1) ) cout<<(a==1? 2*c:2*a)<<endl;
    else if(a==c && c==1) cout<<b+2<<endl;
    else if(a==1 || b==1 || c==1){
        if(a==1) cout<<(b+1)*c<<endl;
        else if(c==1) cout<<(1+b)*a<<endl;
        else{
            int num1=(a+1)*c;
            int num2=a*(1+c);
            cout<<max(num2,num1)<<endl;
        }
    }else{
        cout<<a*b*c<<endl;
    }
}
*/
