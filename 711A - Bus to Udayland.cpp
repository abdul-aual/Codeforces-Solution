#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	bool position=false,flag=false;
	vector<string> bus(n);
	for(int i=0; i<n; i++) {
		cin>>bus[i];
		if((bus[i][0]=='O' && bus[i][1]=='O') || (bus[i][3]=='O' && bus[i][4]=='O'))
		       position=true;

	}

	if(!position) cout<<"NO"<<endl;
	else {
	    cout<<"YES"<<endl;
	    for(int i=0; i<n; i++){
	        if( !flag && bus[i][0]=='O' && bus[i][1]=='O' )
	        {
	            cout<<"++|"<<bus[i][3]<<bus[i][4]<<endl;
	            flag=true;
	        }
	        else if(!flag && bus[i][3]=='O' && bus[i][4]=='O' ){
	            cout<<bus[i][0]<<bus[i][1]<<"|++"<<endl;
	            flag=true;
	        }else{
	            cout<<bus[i]<<endl;
	        }
	    }
	}

















}
