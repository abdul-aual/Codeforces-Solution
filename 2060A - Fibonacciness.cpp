#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,a4,a5,maxCount=0;
        cin>>a1>>a2>>a4>>a5;

            a3=a1+a2;
            int count1=1,count2=1,count3=1;

            if(a2+a3==a4) ++count1;
            if(a3+a4==a5) ++count1;
            maxCount=max(count1,maxCount);

            a3=a4-a2;
            if(a1+a2==a3) ++count2;
            if(a3+a4==a5) ++count2;
            maxCount=max(count2,maxCount);

            a3=a5-a4;
            if(a1+a2==a3) ++count3;
            if(a2+a3==a4) ++count3;
            maxCount=max(maxCount,count3);
            cout<<maxCount<<endl;

    }
}
