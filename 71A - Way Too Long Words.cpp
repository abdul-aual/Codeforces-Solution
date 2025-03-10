#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin>>s;
        int m=s.length();
        if (m> 10)
        {
            cout << s[0] << m - 2 << s[m - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}

