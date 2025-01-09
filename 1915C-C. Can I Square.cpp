#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
 long long int t;
 cin>>t;
 while(t--){
    long long int bucket,sum=0;
    cin>>bucket;
    vector<long long int> arr(bucket);
    for(int i=0;i<bucket; i++){
      cin>>arr[i];
    }
    for(int i=0; i<bucket; i++){
      sum +=arr[i];
    }
     long long int root = sqrt(sum);

    if(root*root==sum){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }

 }



    return 0;
}
