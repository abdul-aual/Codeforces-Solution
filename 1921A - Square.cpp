#include <iostream>
#include <cmath>
using namespace std;
int main(){
    short t;
    cin>>t;
    while(t--){
        short x1,x2,x3,x4,y1,y2,y3,y4,side;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(x1==x2){
            side =abs(y1-y2);
        }
        else if(x1==x3){
            side =abs(y1-y3);
        }
        else if(x1==x4){
            side =abs(y1-y4);
        }
        else if(x2==x3){
            side =abs(y2-y3);
        }
        else if(x2==x4){
            side =abs(y2-y4);
        }
        else{
            side =abs(y3-y4);
        }
        cout<<side*side<<endl;
    }
}
