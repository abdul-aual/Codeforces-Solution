#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
   int k,l,m,n,d;
   cin>>k>>l>>m>>n>>d;
   vector<int> kk;
   vector<int> ll;
   vector<int> mm;
   vector<int> nn;
   set<int> uniqueElements;

   if(k==1 || l==1 || m==1 || n==1) {
       cout<<d<<endl;
        return 0;
   }
    for(int i=k; i<=d; i=i+k){
       kk.push_back(i);
    }
    for(int i=l; i<=d; i=i+l){
       ll.push_back(i);
    }

    for(int i=m; i<=d; i=i+m){
       mm.push_back(i);
    }

    for(int i=n; i<=d; i=i+n){
       nn.push_back(i);
    }

     for (int num : kk) uniqueElements.insert(num);
     for (int num : ll) uniqueElements.insert(num);
      for (int num : mm) uniqueElements.insert(num);
       for (int num : nn) uniqueElements.insert(num);



    cout<<uniqueElements.size()<<endl;
    return 0;

}
