#include<iostream>
using namespace std;
int main()
{

    int n,ant=0,din=0;
    cin>>n;
    char c[n];
    for(int i=0; i<n; i++)
    {
        cin>>c[i];

        if(c[i]=='A') ++ant;
        else ++din;
    }

    if(ant>din) cout<<"Anton"<<endl;
    else if(din>ant) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;





}
