#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int sum=0;
    string name;
    cin>>name;
    sort(name.begin(), name.end());




    for(int i=0; i<name.length(); i++)
    {
            if(name[i] != name[i+1])
                sum+=1;

    }

    if(sum%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;






}
