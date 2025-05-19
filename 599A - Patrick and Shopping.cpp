#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int path1=2*d1 + 2*d2;
    int path2=d1 + d3 + d2;
    int path3=2*(d1 + d3);
    int path4=2*(d2 + d3);

    cout<<min({path3,path2,path1,path4})<<endl;
}
