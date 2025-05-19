#include <iostream>
using namespace std;

int main()
{
    int n,x,distressed_child=0;
    cin>>n>>x;
    long long ic_crms=x;
    for(int i=1; i<=n; i++){
        char c;
        cin>>c;
        int d;
        cin>>d;
        if(c=='+'){
            ic_crms+=d;
        }else{
            if(ic_crms>=d){
                ic_crms-=d;
            }else{
                distressed_child++;
            }
        }
    }

    cout<<ic_crms<<" "<<distressed_child<<endl;

}
