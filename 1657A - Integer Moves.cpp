#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y,move;
        cin>>x>>y;
        int dis=sqrt(x*x + y*y);

        if(x==0 && y==0)  move=0;
        else if((dis*dis) == (x*x + y*y)) move=1;
        else move=2;

        cout<<move<<endl;

    }
    return 0;
}

