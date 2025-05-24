#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int k,water=0,j=11;
    cin>>k;
    int months[12];
    for(int i=0; i<12; i++){
        cin>>months[i];
    }
    sort(months, months+12);

    while(water<k ){
        water+=months[j];
        --j;
        if(water>=k || j<0 ) break;
    }
    if(water>=k){
        cout<<11 - j<<endl;
    }else{
        cout<<-1<<endl;
    }

}
