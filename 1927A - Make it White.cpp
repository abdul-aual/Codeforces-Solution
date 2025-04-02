#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,first_index,last_index;
        string s;
        cin>>n>>s;
        first_index =s.find('B');
        last_index=s.rfind('B');

        if(last_index-first_index>0) {
            cout<<last_index-first_index+1<<endl;
        }else{
            cout<<1<<endl;
        }



    }
}
