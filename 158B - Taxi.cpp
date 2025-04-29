#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n,count_one=0,count_two=0,count_three=0,count_four=0,group=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1) ++count_one;
        else if(arr[i]==2) ++count_two;
        else if(arr[i]==3) ++count_three;
        else ++count_four;
    }

    if(count_one==count_three) { group+=count_one; count_one=0;}
    else if(count_one<count_three){
        group+=count_one+(count_three - count_one);
        count_one=0;
    }else{
        group+=count_three;
        count_one=count_one - count_three;
    }
    if(count_two%2 == 0 ){
        group+=count_two/2;
        group+=ceil(count_one/4.0);
    }else{
        group+=(count_two/2);
        int sum=2+count_one;
        group+=ceil(sum/4.0);
    }

    cout<<group + count_four<<endl;








}
