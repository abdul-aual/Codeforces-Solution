#include<iostream>
#include<set>
#include<cctype>
#include <string>
using namespace std;
int main(){
    string input;
    set<char> uniqueSet;
    getline(cin,input);
    for(char c:input){
        if(islower(c)){
            uniqueSet.insert(c);
        }
    }
    cout<<uniqueSet.size()<<endl;
}
