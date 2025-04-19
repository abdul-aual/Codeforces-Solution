#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,first_t,second_t;
        cin>>a>>b>>c;
        first_t=a-1;
        if(c>b){
            second_t= (c-b)+ (c-1);
        }else{
            second_t=b-1;
        }

        if(first_t<second_t) cout<<1<<endl;
        else if(second_t<first_t) cout<<2<<endl;
        else cout<<3<<endl;
    }

}
