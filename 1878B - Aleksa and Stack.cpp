#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int val = 100;
        for (int i = 0; i < n; ++i) {
            cout << val << " ";
            val += 2;
        }
        cout << endl;
    }
    return 0;
}
