#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a=INT_MAX;
		int b=INT_MAX;
		int c=INT_MAX;
		bool flag_s0=false;
		bool flag_s1=false;
		bool flag_s01=false;
		for(int i=1; i<=n; i++) {
			int m;
			string s;
			cin>>m>>s;
			if(s == "11") {
				c = min(c, m);
				flag_s01 = true;
			}
			if(s[0] == '1') {
				a = min(a, m);
				flag_s0 = true;
			}
			if(s[1] == '1') {
				b = min(b, m);
				flag_s1 = true;
			}


		}

		if(flag_s0 && flag_s1 && flag_s01) {
			if((a+b)<c) {
				cout<<a+b<<endl;
			} else cout<<c<<endl;
		} else if(flag_s01) {
			cout<<c<<endl;
		} else if(flag_s0 && flag_s1) {
			cout<<a+b<<endl;
		} else {
			cout<<-1<<endl;
		}











	}
}
