
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    if ((s == 0 && m > 1) || (s > 9 * m)) {
        cout << "-1 -1" << endl;
        return 0;
    }

    if (s == 0 && m == 1) {
        cout << "0 0" << endl;
        return 0;
    }

    string min_num = "", max_num = "";
    int sum = s;

    for (int i = 0; i < m; i++) {
        int digit = min(9, sum);
        max_num += (digit + '0');
        sum -= digit;
    }


    sum = s;
    for (int i = 0; i < m; i++) {
        for (int d = (i == 0 ? 1 : 0); d <= 9; d++) {
            if (sum - d <= 9 * (m - i - 1)) {
                min_num += (d + '0');
                sum -= d;
                break;
            }
        }
    }

    cout << min_num << " " << max_num << endl;
    return 0;
}
