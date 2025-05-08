#include <iostream>
using namespace std;

int main()
{
	int n,bacteria=0;
	cin>>n;

	while(n>=1) {
		if(n%2==0) n/=2;
		else {
			--n;
			++bacteria;
			n/=2;
		}
	}
	cout<<bacteria<<endl;

}
