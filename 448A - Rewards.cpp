#include <iostream>
#include<cmath>
using namespace std;

int main(){
    short a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    short cup_shelves=ceil((a1+a2+a3)/5.0);
    short medal_shelves=ceil((b1+b2+b3)/10.0);
    cout<<(n>=(cup_shelves+medal_shelves)?"YES":"NO")<<endl;
}
