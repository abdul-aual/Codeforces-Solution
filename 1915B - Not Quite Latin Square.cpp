#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       char arr[3][3];
       int A=0,B=0,C=0;
       for(int i=0; i<3; i++)
       {
           for(int j=0; j<3; j++){
               cin>>arr[i][j];
               if(arr[i][j]=='A') ++A;
               else if(arr[i][j]=='B') ++B;
               else ++C;
           }
       }
       if(A==2) cout<<"A"<<endl;
       else if(B==2) cout<<"B"<<endl;
       else cout<<"C"<<endl;
   }

}
