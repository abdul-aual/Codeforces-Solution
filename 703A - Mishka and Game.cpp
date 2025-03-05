#include <iostream>
using namespace std;

int main() {
    int n, mishka = 0, chris = 0;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;
        mishka += (a > b);
        chris += (b > a);
    }

    if (mishka == chris) cout << "Friendship is magic!^^" << endl;
    else cout << (mishka > chris ? "Mishka" : "Chris") << endl;

    return 0;
}
