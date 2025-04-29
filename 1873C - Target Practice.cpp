
#include <iostream>
#include <algorithm>  // for min()
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char c;
        int total_points = 0;

        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                cin >> c;
                if (c == 'X') {
                    int row_score = min(i, 11 - i);
                    int col_score = min(j, 11 - j);
                    total_points += min(row_score, col_score);
                }
            }
        }

        cout << total_points << endl;
    }

    return 0;
}
