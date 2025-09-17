#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[101][101];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    int sum = 0;
    int mid = n / 2;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
        sum += matrix[i][n - i - 1];
        sum += matrix[mid][i];
        sum += matrix[i][mid];
    }

    sum -= matrix[mid][mid] * 3;
    cout << sum << endl;
    return 0;
}

