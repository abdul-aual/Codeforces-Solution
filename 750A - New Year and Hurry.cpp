#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int availableTime = 240 - k;
    int totalTime = 0;
    int solvedProblems = 0;

    for (int i = 1; i <= n; ++i) {
        totalTime += 5 * i;
        if (totalTime > availableTime) {
            break;
        }
        solvedProblems++;
    }

    cout << solvedProblems << endl;
    return 0;
}

