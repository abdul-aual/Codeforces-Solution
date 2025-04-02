#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,moves=0;
        float add_to_lower;
        cin>>a>>b>>c;
        add_to_lower=abs(a-b)/2.0;
        moves=ceil(add_to_lower/c);
        cout<<moves<<endl;

    }
}

