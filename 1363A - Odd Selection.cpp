
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        int odd = 0, even = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if(a % 2 == 0)
                even++;
            else
                odd++;
        }

        bool possible = false;

        for(int odd_count = 1; odd_count <= x; odd_count += 2) {
            int even_count = x - odd_count;
            if(odd_count <= odd && even_count <= even) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "Yes" : "No") << endl;
    }

    return 0;
}
