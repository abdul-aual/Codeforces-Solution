#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        string s, t;
        cin >> s >> t;

        int len_s = s.size();
        int len_t = t.size();

        int lcm_len = lcm(len_s, len_t);

        string s_repeat = "", t_repeat = "";

        for (int i = 0; i < lcm_len / len_s; ++i) s_repeat += s;
        for (int i = 0; i < lcm_len / len_t; ++i) t_repeat += t;

        if (s_repeat == t_repeat) {
            cout << s_repeat << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}

