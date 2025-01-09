#include <iostream>
#include <string>
using namespace std;

int main() {
short t;
cin>>t;
while(t--){
        string s;
        int ind=0;
        cin>>s;
        if(s[0] != 'c'){++ind; }
        if(s[1] != 'o'){++ind; }
        if(s[2] != 'd'){++ind; }
        if(s[3] != 'e'){++ind; }
        if(s[4] != 'f'){++ind; }
        if(s[5] != 'o'){++ind; }
        if(s[6] != 'r'){++ind; }
        if(s[7] != 'c'){++ind; }
        if(s[8] != 'e'){++ind; }
        if(s[9] != 's'){++ind; }
        cout<<ind<<endl;
}
}

