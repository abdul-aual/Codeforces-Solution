#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];

        sort(arr, arr + 3);

        cout << (arr[2] - arr[0]) << endl;  /
    }
    return 0;
}

