#include<iostream>
#include<unordered_set>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		string s;
		cin>>s;
		unordered_set<char> solvedTask;
		bool suspicious=false;
		char lastTask=s[0];
		for(int i=1; i<n; i++) {
			if( s[i] != lastTask ) {
				if(solvedTask.find(s[i])   != solvedTask.end() ) {
					suspicious=true;
					break;
				}
			}
			solvedTask.insert(lastTask);
			lastTask=s[i];
		}


		if(suspicious){
		    cout<<"NO\n";
		}else{
		    cout<<"YES\n";
		}




	}
}
