#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
char C;int ci;
int totalPeople=0;
for(int i=0; i<n; i++){
    cin>>C>>ci;
    if(C=='B'){
        if(ci>totalPeople){
            cout<<"YES"<<endl;
            totalPeople=0;

        }else{
            cout<<"NO"<<endl;
            totalPeople-=ci;
        }
        continue;
    }else{
        totalPeople+=ci;
    }


}


}
