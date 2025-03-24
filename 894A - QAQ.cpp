#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> q_before(n, 0);
    int count_q = 0;
    for (int i = 0; i < n; ++i) {
        q_before[i] = count_q;
        if (s[i] == 'Q') {
            count_q++;
        }
    }




    vector<int> q_after(n, 0);
    count_q = 0;
    for (int i = n - 1; i >= 0; --i) {
        q_after[i] = count_q;
        if (s[i] == 'Q') {
            count_q++;
        }
    }

    int result = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A') {
            result += q_before[i] * q_after[i];
        }
    }

    cout << result << endl;
    return 0;
}
