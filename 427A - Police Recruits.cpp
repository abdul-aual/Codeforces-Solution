#include <iostream>
using namespace std;

void solve() {
    int n, police = 0, untreated = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;

        if (event == -1) {
            if (police > 0) {
                police--;
            } else {
                untreated++;
            }
        } else {
            police += event;
        }
    }

    cout << untreated << endl;
}

int main() {
    solve();
    return 0;
}
