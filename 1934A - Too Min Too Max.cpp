#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--) {

	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    int a=abs(arr[n-1]-arr[0]);
	    int b=abs(arr[n-1]-arr[1]);
	    int c=abs(arr[n-2]-arr[0]);
	    int d=abs(arr[n-2]-arr[1]);
	    cout<<a+b+c+d<<endl;

	}
}
