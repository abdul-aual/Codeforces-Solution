
#include <iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        char arr[8][8];
        bool R_flag=false;

        for(int i=0; i<8; i++){
            int R=0;
            for(int j=0; j<8; j++){
                cin>>arr[i][j];
                if(arr[i][j]=='R'){
                    ++R;
                    if(R==8){
                        R_flag=true;
                    }
                }
            }
        }

        cout<<(R_flag? "R":"B")<<endl;

    }
}
