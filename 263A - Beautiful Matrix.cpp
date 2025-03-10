
using namespace std;
#include <iostream>

int main() {

    int m,n;
    int arr[5][5];
    for(int i=0; i<5; i++)
    {

        for(int j=0; j<5; j++)
        {

            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                m=i+1;
                n=j+1;

            }
        }
    }


    m=abs(3-m);
    n=abs(3-n);
    cout<<m+n<<endl;






}
