#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[200000]={0};
        cin>>n;
        vector<int> students(n);
        int most_frequent_value = 0;
        unordered_set<int> unique;
        for(int i=0; i<n; i++){
            cin>>students[i];
            unique.insert(students[i]);
            int freq=students[i];
            arr[freq]++;
            if(arr[freq]>most_frequent_value){
                most_frequent_value = arr[freq];
            }

        }


        int unique_size = unique.size();

        if(unique_size == most_frequent_value){
            cout<< unique_size - 1<<endl;
        }else {
            cout<<min(most_frequent_value,unique_size)<<endl;
        }

    }
}
