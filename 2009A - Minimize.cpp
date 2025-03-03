using namespace std;
#include <iostream>


int main()
{
        short t,a,b;
        cin>>t;
        while(t--){
            cin>>a>>b;
            if(a==b){
                cout<<"0"<<endl;
            }else if(b==a+1){
                cout<<"1"<<endl;
            }else{
                int inc= (b-a)/2;
                cout<<((inc-a)+(b-inc))<<endl;

            }
        }
    return 0;
}
