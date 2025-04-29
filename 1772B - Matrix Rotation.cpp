#include<iostream>
using namespace std;

bool isBeautiful_check(int a, int b, int c, int d) {
    return a < b && c < d && a < c && b < d;
}

void rotate90(int &a, int &b, int &c, int &d) {
    int temp = a;
    a = c;
    c = d;
    d = b;
    b = temp;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool beautiful = false;

        for(int i = 0; i < 4; i++) {
            if(isBeautiful_check(a, b, c, d)) {
                beautiful = true;
                break;
            }
            rotate90(a, b, c, d);
        }

        cout << (beautiful ? "YES" : "NO") << '\n';
    }
}
