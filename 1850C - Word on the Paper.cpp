#include <iostream>
#include <vector>
#include<cctype>
using namespace std;

int main() {
        int t;
        cin>>t;
        while(t--){
            string word="";
            vector<string> grid(8);
            for(int i=0; i<8; i++){
                cin>>grid[i];
            }

            for(string row:grid){
                for(char c:row){
                    if(islower(c)){
                        word+=c;
                    }
                }
            }

            cout<<word<<endl;
        }
}

