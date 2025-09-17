#include <iostream>
using namespace std;

int main() {
    int a, b, c, n, x, count = 0;
    cin >> a >> b >> c;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x > b && x < c) count++;
    }
    cout << count << endl;
    return 0;
}

