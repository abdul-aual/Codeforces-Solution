#include <iostream>
using namespace std;

int main() {


    int x, count;
    cin>>x;

    if(x>=5)
    {
        if(x%5==0)
        {
            count=x/5;
        }
        else
        {
            count=(x/5)+1;
        }

    }
    else
    {
        count=1;
    }
    cout<<count<<endl;


    return 0;


}
