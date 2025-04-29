#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s1<<s2<<endl;
    cout<<s2[0];
    for(int i=1; i<s1.size(); i++){
        cout<<s1[i];
    }
    cout<<" "<<s1[0];
    for(int i=1; i<s2.size(); i++){
        cout<<s2[i];
    }cout<<endl;
}

