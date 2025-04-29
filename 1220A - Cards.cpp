#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;

    int countZero=count(s.begin(),s.end(),'z');
    int countN=count(s.begin(),s.end(),'n');
    for(int i=1; i<=countN; i++){
        cout<<"1 ";
    }
    for(int i=1; i<=countZero; i++){
        cout<<"0 ";
    }
    cout<<endl;
}
