#include<iostream>
using namespace std;

int main(){
    string s,temp,res;
    cin>>s;
    for(int i=0; i<s.size();){

        if(s.substr(i,3)=="WUB"){
            if(!temp.empty()){
                if(!res.empty()) res+=' ';
                res+=temp;
                temp.clear();
            }

            i+=3;
        }else{
            temp+=s[i];
            ++i;
        }

    }
    if(!temp.empty()){
        if(!res.empty()) res+=' ';
        res+=temp;
    }
    cout<<res<<endl;
}
