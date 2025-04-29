#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n,max_freq,max_index,min_freq,min_index;
		string s;
		cin>>n>>s;
		vector<char> seen;

		for (int i = 0; i < n; i++) {
			if (find(seen.begin(), seen.end(), s[i]) == seen.end()) {
				seen.push_back(s[i]);
			}
		}

		if(seen.size()>=2) {

            max_freq=count(s.begin(),s.end(),seen[0]);
            max_index=0;
            min_freq=count(s.begin(),s.end(),seen[1]);
            min_index=s.find(seen[1]);


		} else {
			cout<<s<<endl;
			continue;
		}

		for(int i=0; i<n; i++) {

			int current_freq=count(s.begin(),s.end(),s[i]);

			if(current_freq>max_freq){
			    max_freq=current_freq;
			    max_index=i;
			}
			if(current_freq<min_freq){
			    min_freq=current_freq;
			    min_index=i;
			}
		}

        char max_frq_character=s[max_index];
        s[min_index]=max_frq_character;


        cout<<s<<endl;


	}
}
