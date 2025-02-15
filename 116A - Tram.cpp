#include <iostream>
#include<algorithm>
using namespace std;


int main(){

    int t_stop,max_pass=0,current_pass=0;
    cin>>t_stop;
    for(int i=0; i<t_stop; i++){
        int a,b;
        cin>>a>>b;
        if(i==t_stop-1) break;
        current_pass =current_pass+ (b-a);
        if(current_pass>max_pass){
            max_pass = current_pass;
        }
    }
    cout<<max_pass<<endl;

}
