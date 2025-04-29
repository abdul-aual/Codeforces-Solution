#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int y, w;
    cin >> y >> w;

    int max_roll = max(y, w);
    int favorable = 7 - max_roll;
    int total = 6;

    int g = gcd(favorable, total);
    cout << favorable / g << "/" << total / g << endl;

    return 0;
}

