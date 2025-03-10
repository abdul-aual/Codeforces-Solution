#include<iostream>
using namespace std;
int main()
{
    int n,fh,count=0;
    cin>>n>>fh;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

        if(arr[i]<=fh) ++count;
        else count+=2;



    }

    cout<<count<<endl;

}
