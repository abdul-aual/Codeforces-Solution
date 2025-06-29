#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,seq=0,maxSeq=0,water=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='.'){
                seq++;
            }else{
                seq=0;
            }
            maxSeq=max(maxSeq , seq);
        }

        if(maxSeq>2){
            cout<<2<<endl;
            continue;
        }else{
            for(int i=0; i<n;){
                if(s[i]=='.' && s[i+1]=='.'){
                    water+=2;
                    i+=2;
                }else if(s[i]=='.'){
                    ++water;
                    ++i;
                }else ++i;
            }
            cout<<water<<endl;

        }


    }
}
