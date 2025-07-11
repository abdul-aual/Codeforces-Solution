#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    string ss(n, ' ');
    int mid;

    if (n % 2 == 0) {
        mid = n / 2 - 1;
        for (int i = 0; i < n; i += 2)
            ss[mid--] = s[i];

        mid = n / 2;
        for (int i = 1; i < n; i += 2)
            ss[mid++] = s[i];
    } else {
        mid = (n - 1) / 2;
        for (int i = 0; i < n; i += 2)
            ss[mid++] = s[i];

        mid = (n - 1) / 2 - 1;
        for (int i = 1; i < n; i += 2)
            ss[mid--] = s[i];
    }

    cout << ss << endl;

    return 0;
}
