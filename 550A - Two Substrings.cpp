#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    int pos1=s.find("BA");
    if(pos1 !=-1){
        int pos2=s.find("AB", pos1+2);
        if(pos2 !=-1){
            cout<<"YES\n";
            return 0;
        }
    }
    int pos3=s.find("AB");
    if(pos3 !=-1){
        int pos4=s.find("BA", pos3+2);
        if(pos4 !=-1){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

