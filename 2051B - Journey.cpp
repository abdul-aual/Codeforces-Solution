#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,day;
        cin>>n>>a>>b>>c;
        int quotinent = n/(a+b+c);
        int rem = n%(a+b+c);
         quotinent*=3;
         if(rem==0) day=quotinent;
         else if(rem<=a) day=quotinent+1;
         else if(rem<=(a+b))day= quotinent+2;
         else day=quotinent+3;

         cout<<day<<endl;

}
}
