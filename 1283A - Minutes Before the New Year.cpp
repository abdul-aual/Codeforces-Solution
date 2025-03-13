#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
   int h,m;
    cin>>h>>m;
    int final_H=23-h;
    int final_M=60-m;
    cout<<(final_H*60)+final_M<<endl;
}}
