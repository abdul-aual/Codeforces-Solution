#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;

    long long tilesWidth = ceil((double)n / a);
    long long tilesHeight = ceil((double)m / a);

    long long totalTiles = tilesWidth * tilesHeight;

    cout << totalTiles << endl;
    return 0;
}
