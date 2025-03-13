#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d,result;
       cin>>a>>b>>c>>d;
       vector<int> arr={a,b,c,d};
       sort(arr.begin(),arr.end());
       for(int i=0; i<4; i++){
           if(arr[i]==a) result=i+1;
       }
       cout<<4-result<<endl;
   }

    return 0;
}
