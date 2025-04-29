#include <iostream>
using namespace std;

int main()
{
    int a1,a2,a3,a4,total_calories=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='1')  total_calories+=a1;
        else if(s[i]=='2') total_calories+=a2;
        else if(s[i]=='3') total_calories+=a3;
        else  total_calories+=a4;
    }
    cout<<total_calories<<endl;
}
