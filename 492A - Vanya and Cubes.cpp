#include <iostream>
using namespace std;
int main(){

    int total,i=1;
    cin>>total;
    int sum = 0, height = 0,breakPosition=0;
    while(breakPosition<=total){
        sum+=i;
        ++i;
        ++height;
        breakPosition+=sum;
    }

    cout<<height-1<<endl;

}
