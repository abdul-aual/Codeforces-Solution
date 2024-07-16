#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    string result;

    for (int i = 1; i <= n; ++i) {
        result += (i % 2 != 0) ? "I hate" : "I love";
        if (i < n) {
            result += " that ";
        }
    }

    result += " it";

    cout << result << endl;

    return 0;
}

