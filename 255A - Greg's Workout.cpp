#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,chest=0,biceps=0,back=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        int value;
        cin>>value;
        if(i%3==1) chest+=value;
        else if(i%3==2) biceps+=value;
        else back+=value;
    }

    int maxValue=max({chest,biceps,back});
    if(chest==maxValue) cout<<"chest"<<endl;
    else if(biceps==maxValue) cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
}

