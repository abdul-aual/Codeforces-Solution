#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int moves = min(n, m);
    if (moves % 2 == 1)
        cout << "Akshat\n";
    else
        cout << "Malvika\n";
    return 0;
}

