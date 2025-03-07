#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    string current_state, original_password;
    cin >> n >> current_state >> original_password;

    int move = 0;
    for (int i = 0; i < n; i++) {
        int s1 = original_password[i] - '0';
        int s2 = current_state[i] - '0';
        int diff = abs(s1 - s2);

        move += min(diff, 10 - diff);
    }

    cout << move << endl;
    return 0;
}
