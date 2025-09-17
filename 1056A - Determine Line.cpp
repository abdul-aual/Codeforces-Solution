#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> possible_lines;

    for (int i = 0; i < n; ++i) {
        int r;
        cin >> r;

        set<int> current_stop;
        for (int j = 0; j < r; ++j) {
            int line;
            cin >> line;
            current_stop.insert(line);
        }

        if (i == 0) {
            possible_lines = current_stop;
        } else {
            set<int> temp;
            for (int line : possible_lines) {
                if (current_stop.count(line)) {
                    temp.insert(line);
                }
            }
            possible_lines = temp;
        }
    }

    for (int line : possible_lines) {
        cout << line << " ";
    }
    cout << endl;

    return 0;
}

