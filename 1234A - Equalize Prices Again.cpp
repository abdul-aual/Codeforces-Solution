
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        long long sum=0,avg;
        cin>>n;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            sum+=1ll*x;
        }

        avg = ceil((double)sum/n);
        cout<<avg<<endl;

    }
}
