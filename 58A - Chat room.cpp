#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string target="hello";
    int target_index=0;
    for(char ch: s){

        if(ch==target[target_index]) ++target_index;
        if(target_index==5) break;
    }

    cout<<(target_index==5? "YES":"NO")<<endl;
}
