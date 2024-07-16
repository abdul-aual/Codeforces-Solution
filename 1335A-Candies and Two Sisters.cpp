#include <iostream>
using namespace std;

int main() {
    short t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        cout << (n < 3 ? 0 : (n / 2 - (n % 2 == 0))) << endl;
    }
    return 0;
}

