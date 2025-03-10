#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n--)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        if(n1==1 && n2==1 && n3==1) sum+=1;
        else if((n1==1 && n2==1) || (n1==1 && n3==1) || (n2==1 && n3==1)) sum+=1;



    }
    cout<<sum<<endl;




}
