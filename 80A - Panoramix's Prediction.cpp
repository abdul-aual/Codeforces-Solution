#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> prime={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for(int i=0; i<prime.size(); i++){
        if(prime[i]==n){
            if(prime[i+1]==m){
                cout<<"YES"<<endl;
                return 0;
            }else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
}
