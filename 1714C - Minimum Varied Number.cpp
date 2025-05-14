#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,ss;
        cin>>s;
        int num=stoi(s);
        int currentSum=0;
        int i=9;
        while(num>0){
            if(num<i){
                string temp=to_string(num);
                ss+=temp;
                break;
            }else{
                string temp=to_string(i);
                ss+=temp;
                num-=i;
                --i;
            }
        }
        reverse(ss.begin(),ss.end());
        cout<<ss<<endl;
    }
}
