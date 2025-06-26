#include <iostream>
using namespace std;

int main()
{
    int N,M,shocks,days=0;
    cin>>N>>M;
    shocks = N;

    while(shocks--){
        ++days;
        if(days%M==0){
            ++shocks;
        }
    }
    cout<<days<<endl;

}
