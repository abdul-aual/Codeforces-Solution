#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b, count =0;
        cin>>a>>b;
        int difference = abs(a-b);
        count+=difference/10;
        if(difference%10>0){
            ++count;
        }
        cout<<count<<endl;
    }


    return 0;
}
