#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2,s3,s_sum;
    cin>>s1>>s2>>s3;
    s_sum=s1+s2;
    sort(s_sum.begin(),s_sum.end());
    sort(s3.begin(),s3.end());

    if(s_sum==s3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
