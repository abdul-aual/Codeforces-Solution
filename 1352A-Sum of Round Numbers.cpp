#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> round_numbers;
    int place = 1;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            round_numbers.push_back(digit * place);
        }
        n /= 10;
        place *= 10;
    }

    cout << round_numbers.size() << endl;
    for (int num : round_numbers) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
