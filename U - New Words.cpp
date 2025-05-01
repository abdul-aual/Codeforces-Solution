#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    int countE = 0, countG = 0, countY = 0, countP = 0, countT = 0;

    for (char c : S) {
        c = toupper(c);
        if (c == 'E') countE++;
        else if (c == 'G') countG++;
        else if (c == 'Y') countY++;
        else if (c == 'P') countP++;
        else if (c == 'T') countT++;
    }

    int result = min({countE, countG, countY, countP, countT});
    cout << result << endl;

    return 0;
}

