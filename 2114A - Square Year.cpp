#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int num = stoi(s);

        int a=sqrt(num);

        if(a*a==num){
            cout<<0<<" "<<a<<endl;

        }else{
            cout<<-1<<endl;
        }


    }
    return 0;
}

