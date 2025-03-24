#include <iostream>
#include<vector>
using namespace std;
int main()
{

       int t;
       cin>>t;
       while(t--){
           int n,zero_count=0,sum=0;
           cin>>n;
           vector<int> arr(n);
           for(int i=0; i<n; i++){
               cin>>arr[i];
               sum+=arr[i];
               if(arr[i]==0) ++zero_count;
           }

           int final_addition_1=zero_count;
           if(final_addition_1+sum==0){
               ++final_addition_1;
           }
           cout<<final_addition_1<<endl;



       }


}
