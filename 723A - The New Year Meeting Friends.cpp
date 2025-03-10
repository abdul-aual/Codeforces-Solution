
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[]={a,b,c};
    sort(arr,arr+3);
    int distance = (arr[2]-arr[1])+(arr[1]-arr[0]);
    cout<<distance<<endl;
}
