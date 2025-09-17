#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> stars;
    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < m; ++j) {
            if (row[j] == '*') {
                stars.push_back({i + 1, j + 1});
            }
        }
    }
    int r, c;
    if (stars[0].first == stars[1].first)
        r = stars[2].first;
    else if (stars[0].first == stars[2].first)
        r = stars[1].first;
    else
        r = stars[0].first;

    if (stars[0].second == stars[1].second)
        c = stars[2].second;
    else if (stars[0].second == stars[2].second)
        c = stars[1].second;
    else
        c = stars[0].second;

    cout << r << " " << c << endl;
    return 0;
}

