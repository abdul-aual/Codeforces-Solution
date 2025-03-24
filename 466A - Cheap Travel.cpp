#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n,one_bundle,single_price,bundle_price;
   cin>>n>>one_bundle>>single_price>>bundle_price;

   if(bundle_price>=single_price*one_bundle){
       cout<<n*single_price<<endl;
   }else{
       int divi=n/one_bundle;
       int remPrice=(n%one_bundle)*single_price;

       int ext = min(remPrice, bundle_price);

       cout<<(divi*bundle_price)+ext<<endl;
   }


}
