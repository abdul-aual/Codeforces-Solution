#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int dogFed,catFed,bothF,dog,cat;
		cin>>dogFed>>catFed>>bothF>>dog>>cat;
		if(dog<=dogFed) {
			catFed+=bothF;
			if(cat<=catFed) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}else if(dog>dogFed) {
            dog-=dogFed;
            bothF-=dog;
            if(bothF>=0){
                catFed+=bothF;
                if(catFed>=cat) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }else{
                cout<<"NO"<<endl;
            }
		}
	}
}
