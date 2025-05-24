#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,h1,h2,h3;
        cin>>n;

        h2=n/3;
        h1=h2+1;
        h3=h2-1;
        if(n%3==2){
            ++h1;
            ++h2;
        }else if(n%3==1) ++h1;

        cout<<h2<<" "<<h1<<" "<<h3<<endl;

    }

}
