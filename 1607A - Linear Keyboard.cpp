#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int timeT=0;
        string keyboard,word;
        cin>>keyboard>>word;
        for(int i=1; i<word.size(); i++){
            int lowerI=keyboard.find(word[i-1]);
            int higherI=keyboard.find(word[i]);
            timeT+=abs(lowerI - higherI);
        }
        cout<<timeT<<endl;
    }
}
