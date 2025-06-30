#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c,totalMonkey=0,seatLeft=0;
        cin>>m>>a>>b>>c;
        if(m>=a){
            totalMonkey+=a;
            seatLeft+=(m - a);
        }else{
            totalMonkey+=m;
        }
        if(m>=b){
            totalMonkey+=b;
            seatLeft+=(m - b);
        }else{
            totalMonkey+=m;
        }

        if(seatLeft>=c) totalMonkey+=c;
        else totalMonkey+=seatLeft;


        cout<<totalMonkey<<endl;

    }
}
