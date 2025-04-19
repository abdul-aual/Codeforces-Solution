#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        string a;
        cin >> a;

        int freq[7] = {0}; // A-G

        for(char c : a) {
            freq[c - 'A']++;
        }

        int need = 0;
        for(int i = 0; i < 7; i++) {
            if(freq[i] < m) {
                need += (m - freq[i]);
            }
        }

        cout << need << endl;
    }

    return 0;
}

