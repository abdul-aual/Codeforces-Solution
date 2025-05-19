#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {

		int l,r;
		cin>>l>>r;
	    long long double_range = 1LL * (r - l)* 2;

		int maxLength = (sqrt(4*double_range + 1) - 1) /2  + 1;
		cout<<maxLength<<endl;

	}
}
