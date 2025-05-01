#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor((float)a / b) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil((float)a / b) << endl;
    cout << "round " << a << " / " << b << " = " << round((float)a / b) << endl;

    return 0;
}
