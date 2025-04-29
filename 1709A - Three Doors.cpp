#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        bool found_key=true;
        for(int i=1; i<3; i++){
            if(x==1){
                if(a==0){
                    found_key=false;
                    break;
                }else x=a;
            }else if(x==2){
                if(b==0){
                    found_key=false;
                    break;
                }else{
                    x=b;
                }
            }else{
                if(c==0){
                    found_key=false;
                    break;
                }else{
                    x=c;
                }
            }
        }
        cout<<(found_key?"YES":"NO")<<endl;
    }
}
