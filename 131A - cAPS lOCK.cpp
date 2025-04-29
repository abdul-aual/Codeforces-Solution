#include <iostream>
#include <cctype>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	bool flag1=true;
	cin >> s;
	if(islower(s[0])) {
		for(int i=1; i<s.size(); i++) {
			if(islower(s[i])) {
				flag1=false;
				break;
			}
		}
		if(flag1) {
			cout<<(char)toupper(s[0]);
			for(int i=1; i<s.size(); i++) {
				cout<<(char)tolower(s[i]);

			}
			cout<<endl;
		} else cout<<s<<endl;

	} else if(isupper(s[0])) {
		for(int i=1; i<s.size(); i++) {
			if(islower(s[i])) {
				flag1=false;
				break;
			}
		}
		if(flag1) {

			for(int i=0; i<s.size(); i++) {
				cout<<(char)tolower(s[i]);

			}
			cout<<endl;
		} else cout<<s<<endl;
	}else cout<<s<<endl;


}

