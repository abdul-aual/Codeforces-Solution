#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }

    int s, t;
    cin >> s >> t;

    if (s == t) {
        cout << 0 << endl;
        return 0;
    }

    s--; t--;
    if (s > t) swap(s, t);

    int clockwise = 0;
    for (int i = s; i < t; ++i) {
        clockwise += d[i];
    }

    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += d[i];
    }

    int counterclockwise = total - clockwise;

    cout << min(clockwise, counterclockwise) << endl;

    return 0;
}
