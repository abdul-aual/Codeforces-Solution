#include <iostream>
using namespace std;

int main() {

    int k,n,w, sum=0, result;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
        sum+=i*k;

    }
    if(n>=sum) sum=0;
    else sum=sum-n;
    cout<<sum<<endl;

    return 0;
}
