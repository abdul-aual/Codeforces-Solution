#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,total=0;
        int rem,bonus;
        cin>>n;
        while(n>=10){
            rem=n%10;
            n-=rem;
            total+=n;
            bonus=n/10;
            n=0;
            n+=bonus+rem;
        }
        cout<<total+n<<endl;
    }
}
