#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int sec=0,current_pos=1;
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++){
            int n=s[i]-'0';
            if(n==0){
                sec+=(10 - current_pos)+1;
                current_pos=10;
            }else{
                sec+=abs(n -  current_pos) + 1;
                current_pos=n;
            }
        }
        cout<<sec<<endl;
    }
}
