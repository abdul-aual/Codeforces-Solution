
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    short t;
    cin>>t;
    while(t--){
        int a,b,c,m,n,o;
        cin>>a>>b>>c;
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        m=arr[0];n=arr[1];o=arr[2];
        if(m==n && n==o){
            m+=2; n+=2; ++o;
        }else if(m==n && n<o){
            ++m; ++n;
            if(m==o){
                ++m; ++n; ++o;
            }
            else{
                m+=2; ++n;
            }
        }else if(m<n && n==o){
            int s=n-m;
            if(s>=4){m+=5;}
            else if(s==3){m+=4;++n;}
            else{m+=3; ++n; ++o;}

        }else{
            int s=n-m;
            if(s>=4){m+=5;}
            else if(s==3 || s==2){m+=4; ++n;}
            else{
                m+=3; n+=2;
            }
        }
        cout<<m*n*o<<endl;
    }
}




