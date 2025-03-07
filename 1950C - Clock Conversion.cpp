#include <iostream>
#include <iomanip>
using namespace std;

void convertTime(string s) {
    int hour = stoi(s.substr(0, 2));
    int min = stoi(s.substr(3, 2));

    string period = (hour < 12) ? " AM" : " PM";

    if (hour == 0) hour = 12;
    else if (hour > 12) hour -= 12;

    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << min << period << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        convertTime(s);
    }
    return 0;
}

