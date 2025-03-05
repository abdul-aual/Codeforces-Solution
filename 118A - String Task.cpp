#include <iostream>
#include <algorithm>
using namespace std;
int main(){
   string s,result="";
   cin>>s;
   transform(s.begin(),s.end(),s.begin(), :: tolower);
  for(char c:s){
      if(!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')){
          result+='.';
          result+=c;
      }
  }
  cout<<result<<endl;
}
