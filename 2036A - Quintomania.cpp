#include<iostream>
#include<vector>
using namespace std;


int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int> arr(n);
       for(int i=0; i<arr.size(); i++){
           cin>>arr[i];
       }
        bool valid=true;
       for(int i=1; i<arr.size(); i++){

           if(abs(arr[i]-arr[i-1]) !=5 && abs(arr[i]-arr[i-1]) !=7 )
          {
              valid=false;
           }
       }
       cout<<(valid? "YES":"NO")<<endl;
   }

}
