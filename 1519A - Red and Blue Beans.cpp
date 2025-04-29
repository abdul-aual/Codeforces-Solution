#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--) {
	    int r,b,d;
	    cin>>r>>b>>d;

	    int maxN=max(r,b);
	    int minN=min(r,b);

	    int diff= ceil(float(maxN)/minN)-1;


	    if(diff<=d) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;


	}
}
