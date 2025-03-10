#include <iostream>
#include <algorithm>
using namespace std;
int main()
{


    int arr[101], count=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+') continue;
        else
        {
            arr[count++]=s[i]-'0';
        }
    }

    sort(arr, arr+count);

    for(int i=0; i<count; i++)
    {
        cout<<arr[i];
        if(i==count-1) break;
        cout<<"+";
    }










}
