#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            m=1;
            break;
        }
        else m=0;

    }
    if(m==1) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;


}
