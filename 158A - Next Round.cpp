#include <iostream>
using namespace std;
int main()
{
    int ai,ith,sum=0;
    cin>>ai>>ith;
    int arr[ai];

    for(int i=0; i<ai; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<ai; i++)
    {
        if(arr[i]>0 &&  arr[i]>=arr[ith-1])
        sum+=1;

    }
    cout<<sum<<endl;








}
