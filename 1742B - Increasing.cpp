#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{

   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int> arr(n);
       unordered_set<int> unique;
       for(int i=0; i<n; i++){
           cin>>arr[i];
           unique.insert(arr[i]);
       }
       cout<<(arr.size()==unique.size()? "YES":"NO")<<endl;
   }

}
