#include <iostream>
using namespace std;
int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << min(a, b) << " " << max(a, b) << endl;
    }
}
