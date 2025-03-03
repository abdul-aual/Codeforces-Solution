#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cow = n/4;
        int chicken = (n%4)/2;
        cout<<cow+chicken<<endl;
    }
}
