#include <iostream>
#include<algorithm>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int a_count = count(s.begin(),s.end(),'a');
    if(a_count>s.size()/2){
        cout<<s.size()<<endl;
    }else{
        cout<<a_count+a_count-1<<endl;
    }
    return 0;
}
