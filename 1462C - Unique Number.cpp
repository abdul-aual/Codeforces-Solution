#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
		int x;
		vector<int> arr;
		cin>>x;
		if(x>45) {
			cout<<-1<<endl;
		} else {
			for (int i = 9; i > 0 && x > 0; i--) {
				if (x >= i) {
					arr.push_back(i);
					x -= i;
				} else {
					arr.push_back(x);
					x = 0;
				}
			}

			for(int i=arr.size()-1; i>=0; i--) {
				cout<<arr[i];
			}
			cout<<endl;
		}

	}
}


