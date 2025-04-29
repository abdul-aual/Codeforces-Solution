#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
		long long a,b,c;
		cin>>a>>b>>c;
		if(c%2==0) a+=c/2;
		else a+=(c+1)/2;
		b+=c/2;

		if(a>b) cout<<"First"<<endl;
		else cout<<"Second"<<endl;
	}
}
