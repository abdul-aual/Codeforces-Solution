#include <iostream>
using namespace std;
int main() {
        int t;
        cin>>t;
        while(t--){
            string s;
            int sum1 = 0,sum2=0;
            cin>>s;
            for(int i=0; i<3; i++){
                sum1 += s[i];
            }
            for(int i=3; i<6; i++){
                sum2 += s[i];
            }
          cout << ((sum1 == sum2) ? "YES" : "NO") << endl;


        }



    return 0;
}
