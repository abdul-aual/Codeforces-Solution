#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int bb[7];
        for(int i=0; i<7; i++){
            cin>>bb[i];
        }
        int a=bb[0];
        int b=bb[1];
        int c=bb[6]-(a+b);

        cout<<a<<" "<<b<<" "<<c<<endl;

    }
}
