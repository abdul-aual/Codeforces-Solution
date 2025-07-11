#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 2 * n;
    unordered_set<int> table;
    int max_on_table = 0;

    for (int i = 0; i < total; ++i) {
        int sock;
        cin >> sock;

        if (table.count(sock)) {
            table.erase(sock);
        } else {
            table.insert(sock);
            if (table.size() > max_on_table)
                max_on_table = table.size();
        }
    }

    cout << max_on_table << "\n";
    return 0;
}

