#include <iostream>
using namespace std;
int main()
{
    int n,b,d,juice=0,wastage_clr=0;
    cin>>n>>b>>d;
    for(int i=1; i<=n; i++){
        int orange;
        cin>>orange;
        if(orange<=b){
            juice+=orange;
            if(juice>d){
                ++wastage_clr;
                juice=0;
            }
        }

    }
    cout<<wastage_clr<<endl;
}
