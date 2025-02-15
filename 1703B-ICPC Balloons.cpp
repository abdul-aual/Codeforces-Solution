#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {

            int t;
            cin>>t;
            while(t--){
                int n,totalBallons=0;
                string s;
                cin>>n>>s;

                unordered_set<char> solvedProblems;

                for(char ch:s){
                    if(solvedProblems.find(ch)==solvedProblems.end()){
                        totalBallons+=2;
                        solvedProblems.insert(ch);
                    }else{
                        totalBallons+=1;
                    }
                }
                cout<<totalBallons<<endl;
            }

    return 0;
}

