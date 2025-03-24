#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        bool chocolate_pass=false;
        int position_x = 0, position_y = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') ++position_y;
            else if (s[i] == 'D') --position_y;
            else if (s[i] == 'R') ++position_x;
            else if (s[i] == 'L') --position_x;

            if (position_x == 1 && position_y == 1) {
                chocolate_pass=true;
                break;
            }
        }
        cout<<(chocolate_pass?"YES":"NO")<<endl;

    }
}

