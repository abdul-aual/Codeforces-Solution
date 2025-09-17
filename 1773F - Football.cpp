#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    if(n==1){
        if(a==b){
            cout<<1<<endl;
            cout<<a<<":"<<b<<endl;
        }else{
            cout<<0<<endl;
            cout<<a<<":"<<b<<endl;
        }
        return 0;
    }

    int total=a+b;
    if(total>=n){
        cout<<0<<endl;
        if(total==n){
            while(a>0){
                cout<<1<<":"<<0<<endl;
                --a;
            }
            while(b>0){
                cout<<0<<":"<<1<<endl;
                --b;
            }
        }else{
            if(a<=b){

                while(n>1){
                    if(a>0){
                        cout<<1<<":"<<0<<endl;
                        --a;
                    }else{
                        cout<<0<<":"<<1<<endl;
                        --b;
                    }
                    --n;
                }
                cout<<a<<":"<<b<<endl;
            }else{
                while(n>1){
                    if(b>0){
                        cout<<0<<":"<<1<<endl;
                        --b;
                    }else{
                        cout<<1<<":"<<0<<endl;
                        --a;
                    }
                    --n;
                }
                cout<<a<<":"<<b<<endl;
            }

        }

    }else{
        int draw = n - total;
        cout<<draw<<endl;
        while(draw>0){
            cout<<0<<":"<<0<<endl;
            --draw;
        }

        while(a>0){
            cout<<1<<":"<<0<<endl;
            --a;
        }
        while(b>0){
            cout<<0<<":"<<1<<endl;
            --b;
        }
    }
}








