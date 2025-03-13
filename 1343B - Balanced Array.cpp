#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> even, odd;

        if (n % 4 != 0) {
            cout << "NO\n";
        } else {
            for (int i = 2; i <= n; i += 2) {
                even.push_back(i);
                if (i == n) {
                    odd.push_back(i - 1 + n / 2);
                } else {
                    odd.push_back(i - 1);
                }
            }

            cout << "YES\n";

            for (int num : even) {
                cout << num << " ";
            }

            for (int i = 0; i < odd.size(); i++) {
                cout << odd[i];
                if (i != odd.size() - 1) cout << " ";
            }

            cout << endl;
        }
    }
}

