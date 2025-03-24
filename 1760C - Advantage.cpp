#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int> arr(n),copyArr,diffArray;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            copyArr.push_back(arr[i]);


        }
        sort(copyArr.begin(),copyArr.end());

        int maxElement=copyArr[n-1];
        int maxSecondElement=copyArr[n-2];

        for(int i=0; i<n; i++){
            if(arr[i]==maxElement){
                diffArray.push_back(maxElement- maxSecondElement);
            }else{
                diffArray.push_back(arr[i]-maxElement);
            }
        }

        for(int num:diffArray){
            cout<<num<<" ";
        }
        cout<<endl;



    }

}
