#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		int arr[]= {a,b,c};
		sort(arr,arr+3);
		if(arr[1]+arr[2]>=10) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}
