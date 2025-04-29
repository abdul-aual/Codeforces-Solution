#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int s,n;
    cin>>s>>n;
    bool defeat_dragon=true;
    vector<pair<int,int>> dragon_feature;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        dragon_feature.push_back({x,y});
    }
    sort(dragon_feature.begin(),dragon_feature.end());
    for(auto it:dragon_feature){
        if(it.first<s){
            s+=it.second;
        }else{
            defeat_dragon=false;
            break;
        }
    }
    cout<<(defeat_dragon?"YES":"NO")<<endl;
}

