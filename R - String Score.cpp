#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int score = 0;
    string result;
    int i = 0;

    while (i < N) {
        char c = S[i];

        if (c == 'V') {
            score += 5;
            result += 'V';
            i++;
        } else if (c == 'W') {
            score += 2;
            result += 'W';
            i++;
        } else if (c == 'X') {
            if (i + 1 < N) {
                i += 2; // skip next character
            } else {
                i++; // X at end, ignore
            }
        } else if (c == 'Y') {
            if (i + 1 < N) {
                result += 'Y';
                S += S[i + 1]; // move next char to end of string
                N++;
                i += 2;
            } else {
                i++;
            }
        } else if (c == 'Z') {
            if (i + 1 < N) {
                char next = S[i + 1];
                if (next == 'V') {
                    score /= 5;
                    i += 2;
                } else if (next == 'W') {
                    score /= 2;
                    i += 2;
                } else {
                    result += 'Z';
                    i++;
                }
            } else {
                i++; // Z at end
            }
        } else {
            i++; // fallback
        }
    }

    cout << score << endl;
    return 0;
}

