#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,cx,cy,shortest_path;
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        if(ax==bx && bx==cx){

            if( (ay<cy && by>cy) || ( ay>cy && by<cy )  ) shortest_path=abs(ay-by)+2;
            else shortest_path = abs(ay-by);

        }else if( ay==by && by==cy ){
            if( (ax<cx && bx>cx) ||(ax>cx && bx<cx) ) shortest_path=abs(ax-bx)+2;
            else shortest_path=abs(ax-bx);


        }else{
            int x_diff=abs(ax-bx);
            int y_diff=abs(ay-by);
            shortest_path=(x_diff+y_diff);

        }
        cout<<shortest_path<<endl;
    }
}
