#include <iostream>
#include<vector>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
       int n,odd=0,even=0;
   cin>>n;

   for(int i=0; i<n; i++){
       int x;
       cin>>x;
       if(x%2==0) ++even;
       else ++odd;
   }
   if(n%2 !=0) cout<<-1<<endl;
   else if(even==odd) cout<<0<<endl;
   else if(even==0) cout<<odd/2<<endl;
   else if(odd==0) cout<<even/2<<endl;
   else if(even>odd) cout<<even-(n/2)<<endl;
   else if(odd>even) cout<<odd-(n/2)<<endl;
  }


}
