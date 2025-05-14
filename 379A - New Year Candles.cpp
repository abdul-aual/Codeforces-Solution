#include <iostream>
using namespace std;

int main()
{
    int a,b,totalCandles=0;
    cin>>a>>b;

    totalCandles+=a;
    while(a>=b){

        int newC=a/b;
        int rem=a%b;
        a=newC + rem;
        totalCandles+=newC;

    }
    cout<<totalCandles<<endl;
}
