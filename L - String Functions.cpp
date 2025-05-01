#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    while (Q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back") {
            if (!S.empty()) S.pop_back();
        }
        else if (cmd == "front") {
            cout << S[0] << '\n';
        }
        else if (cmd == "back") {
            cout << S.back() << '\n';
        }
        else if (cmd == "sort") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            l = max(1, min(l, (int)S.size()));
            r = max(1, min(r, (int)S.size()));
            sort(S.begin()+l-1, S.begin()+r);
        }
        else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            l = max(1, min(l, (int)S.size()));
            r = max(1, min(r, (int)S.size()));
            reverse(S.begin()+l-1, S.begin()+r);
        }
        else if (cmd == "print") {
            int pos;
            cin >> pos;
            cout << S[pos-1] << '\n';
        }
        else if (cmd == "substr") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            l = max(1, min(l, (int)S.size()));
            r = max(1, min(r, (int)S.size()));
            cout << S.substr(l-1, r-l+1) << '\n';
        }
        else if (cmd == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }

    return 0;
}
