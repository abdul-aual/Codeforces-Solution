#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,even,even_in_wrong_pos=0,odd_in_wrong_pos=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==0 && i%2 !=0) even_in_wrong_pos++;
            else if(arr[i]%2 !=0 && i%2==0) odd_in_wrong_pos++;
        }

        if(even_in_wrong_pos==odd_in_wrong_pos){
            cout<<even_in_wrong_pos<<endl;
        }else cout<<-1<<endl;

    }

}
