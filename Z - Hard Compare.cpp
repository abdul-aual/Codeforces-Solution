#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long double lhs = B * logl(A);
    long double rhs = D * logl(C);

    if (lhs > rhs)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

