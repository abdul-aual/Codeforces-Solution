#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int count8=count(s.begin(),s.end(),'8');
    int phone_length=s.size()/11;
    cout<<min(phone_length,count8)<<endl;

}
