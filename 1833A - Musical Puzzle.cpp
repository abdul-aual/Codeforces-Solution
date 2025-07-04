#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        unordered_set<string> unique;
        for(int i=0; i<n-1; i++){
            string substring = "";
            substring+=s[i];
            substring+=s[i+1];
            unique.insert(substring);
        }

        cout<<unique.size()<<endl;
    }

}
