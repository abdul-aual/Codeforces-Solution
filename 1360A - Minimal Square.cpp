#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

   int t;
   cin>>t;
   while(t--){
       int a,b;
       cin>>a>>b;
       int one_side=min( max(2*a,b),max(a,2*b)   );
       cout<<one_side*one_side<<endl;
   }

}
