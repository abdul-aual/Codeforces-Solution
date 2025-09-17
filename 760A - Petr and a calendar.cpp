#include <iostream>
using namespace std;
int main()
{
    int m,d,days_remain;
    cin>>m>>d;

    int first_week=8-d,total_week=1;

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        days_remain=31 - first_week;

    }else if(m==2){
        days_remain=28 - first_week;

    }else{
        days_remain=30 - first_week;
    }

    while(days_remain>0){
        ++total_week;
        days_remain-=7;
    }
    cout<<total_week<<endl;
}
