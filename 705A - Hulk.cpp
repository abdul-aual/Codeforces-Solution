#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    string hate = "I hate";
    string love = "I love";
    string fin = " it";
    string that = " that ";

    string result = "";

    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            result += hate;
        } else {
            result += love;
        }

        if (i < n) {
            result += that;
        }
    }

    result += fin;

    cout << result << endl;

    return 0;
}
