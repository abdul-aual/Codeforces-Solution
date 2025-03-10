#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n,jersy_changed=0;
    cin>>n;
    vector<int> home_jersy_color(n);
    vector<int>away_jersy_color(n);
    for(int i=0; i<n; i++){
        cin>>home_jersy_color[i]>>away_jersy_color[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(i==j){
                continue;
            }
            else{
                if(home_jersy_color[i]==away_jersy_color[j]){
                    ++jersy_changed;
                }
            }
        }
    }
    cout<<jersy_changed<<endl;

}


