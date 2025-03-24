
#include<iostream>
using namespace std;
int main() {

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;


		for(int i=1; i<=2*n; i++) {
			for(int j=1; j<=2*n; j++) {
				int jm=j%4;
				int im=i%4;
				if(im==1 || im==2) {
					if(jm==0 || jm==3) cout<<".";
					else cout<<"#";
				}

				else {
					if(jm==0 || jm==3) cout<<"#";
					else cout<<".";
                    }

			}
			 cout<<endl;
		}
	}
}




