#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    char last = 0;
    int count = 0;
    for (char c : s) {
        if (c != last) {
            count++;
            last = c;
        }
    }
    cout << count << endl;
    return 0;
}

