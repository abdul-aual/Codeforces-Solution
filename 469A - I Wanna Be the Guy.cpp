#include <iostream>
using namespace std;

int main() {
    int n,p,q;
    cin>>n>>p;
    int arr[250];
    for(int i=0; i<p; i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p; i<p+q; i++){
        cin>>arr[i];
    }
    int m=1;
    bool found =true ;
    while(m<=n){
        bool find_current_number=false;
        for(int i=0; i<p+q; i++){
            if(m==arr[i]){
                find_current_number=true;
                break;
            }
        }
        if(!find_current_number){
            found = false;
            break;
        }
        ++m;
    }
    if(!found){
        cout<<"Oh, my keyboard!"<<endl;
    }
    else{
        cout<<"I become the guy."<<endl;
    }

}







