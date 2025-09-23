#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        int len=x.length();
        int min=9;
        for(int i=0; i<len; i++){
            int digit = x[i]-'0';
            if(digit<min){
                min = digit;
            }
        }
        cout<<min<<endl;
    }
}
