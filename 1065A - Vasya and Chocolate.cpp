#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, a, b, c;
        cin >> s >> a >> b >> c;
        long long totalBars = (s / c);
        long long offers = totalBars / a;
        cout << totalBars + offers * b << endl;
    }
    return 0;
}
