#include<iostream>
using namespace std;
int main(){
    int t,face=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="Tetrahedron") face+=4;
        else if(s=="Cube") face+=6;
        else if(s=="Octahedron") face+=8;
        else if(s=="Dodecahedron") face+=12;
        else face+=20;
    }
    cout<<face<<endl;
}
