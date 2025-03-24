#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr(n),unique;
    unordered_set<int> visited;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
        if(visited.find(arr[i]) == visited.end()){
            visited.insert(arr[i]);
            unique.push_back(arr[i]);
        }
    }
    cout<<unique.size()<<endl;
    for(int i=unique.size()-1; i>=0; i--){
        cout<<unique[i];
        if(i>0) cout<<" ";
    }
    cout<<endl;

}
