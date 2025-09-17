#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
   int n,one,zero,miss_position;
   string s;
   cin>>n>>s;
    zero = count(s.begin(),s.end(),'0');
    one = n-zero;
   miss_position = count(s.begin(), s.begin()+zero, '1');

   cout<<miss_position<<endl;


}}
