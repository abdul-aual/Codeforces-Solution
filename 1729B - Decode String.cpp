#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,lower;
		bool double_digit=false;
		vector<char> vector1;
		string s;
		cin>>n>>s;

		reverse(s.begin(),s.end());

		for(int i=0; i<n; i++){
		    if(s[i]=='0'){
		        string ff="";
		        char singleD=s[i+1];
		        char doubleD=s[i+2];
		        ff+=doubleD;
		        ff+=singleD;
		        int value = stoi(ff);
		        char finalChar= 'a'+value-1;
		        vector1.push_back(finalChar);
		        i+=2;

		    }else{
		        int value=s[i]-'0';
		        char finalChar='a'+value-1;
		        vector1.push_back(finalChar);
		    }
		}
		reverse(vector1.begin(), vector1.end());
		for(char c: vector1){
		    cout<<c;
		}cout<<endl;


	}
}
