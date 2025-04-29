#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    string unique_s="";
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(find(unique_s.begin(),unique_s.end(),s[i]) ==unique_s.end()){
            unique_s+=s[i];
        }
    }
    sort(unique_s.begin(),unique_s.end());
    for(int i=0; i<unique_s.size(); i++){
        int char_count=count(s.begin(),s.end(),unique_s[i]);
        cout<<unique_s[i]<<" : "<<char_count<<endl;
    }
}

