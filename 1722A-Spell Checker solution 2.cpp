#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 int main(){
 int n;
 cin>>n;
 while(n--){
        int s_length;
 cin>>s_length;
    string input_name;
 cin>>input_name;

 if(s_length !=5){
    cout<<"NO"<<endl;
    continue;
 }

 string target_name = "Timur";


sort (target_name.begin(), target_name.end());
 sort(input_name.begin(), input_name.end());

 (target_name == input_name)? cout<<"YES"<<endl : cout<<"NO"<<endl;


 }
 return 0;

 }

