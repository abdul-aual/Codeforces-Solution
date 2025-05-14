#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,posC=0,negC=0;
        cin>>n;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x>0) ++posC;
            else ++negC;
        }
      int i=0;
      while(negC%2 !=0 || posC<negC){
          i++;
          --negC;
          ++posC;
      }
        cout<<i<<endl;
    }

}

