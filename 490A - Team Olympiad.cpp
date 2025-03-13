#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> programming_index,math_index,pe_index;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) {
            programming_index.push_back(i + 1);
        } else if (arr[i] == 2) {
            math_index.push_back(i + 1);
        } else {
            pe_index.push_back(i + 1);
        }
    }

        int total_tm= min({programming_index.size(),math_index.size(),pe_index.size()});

    cout << total_tm<< endl;
for(int i=0; i<total_tm; i++){
    cout<<programming_index[i]<<" "<<math_index[i]<<" "<<pe_index[i]<<endl;
}
    return 0;
}

