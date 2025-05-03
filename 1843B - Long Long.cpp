#include <iostream>
#include<vector>
using namespace std;
int main()
{
      ios::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) {

		int n,operation=0;
		long long sum=0;
		cin>>n;
		vector<int> arr(n);
		bool sequence=false;
		for(int i=0; i<n; i++) {
            cin>>arr[i];
            sum+=abs(arr[i]);
            if(arr[i]<0){
                sequence=true;
            }else if(arr[i]>0){
                if(sequence){
                    ++operation;
                }
                sequence=false;
            }
            else {
                if(sequence){
                    sequence=true;
                }
            }
            if(i==n-1 && sequence) ++ operation;

		}
		cout<<sum<<" "<<operation<<endl;
	}
}
