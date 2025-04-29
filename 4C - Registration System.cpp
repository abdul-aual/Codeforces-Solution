#include <iostream>
#include<unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    unordered_map<string,int> database;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;

        if(database.count(s)==0){
            cout<<"OK"<<endl;
            database[s]=1;
        }else{
            cout<<s<<database[s]<<endl;
            database[s]++;
        }
    }
}
