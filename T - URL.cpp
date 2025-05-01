#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    size_t pos = S.find('?');
    string params = S.substr(pos + 1);

    size_t start = 0;
    while (start < params.size()) {
        size_t end = params.find('&', start);
        if (end == string::npos) end = params.size();

        string param = params.substr(start, end - start);
        size_t sep = param.find('=');
        string key = param.substr(0, sep);
        string value = param.substr(sep + 1);

        cout << key << ": " << value << endl;

        start = end + 1;
    }

    return 0;
}

