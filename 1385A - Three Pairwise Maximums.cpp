#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y && x==z) {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }else if(x==y && y>z){
            cout<<"YES"<<endl;
            cout<<x<<" "<<z<<" "<<z<<endl;
        }else if(x==z && z>y){
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<y<<endl;
        }else if(y==z && z>x){
            cout<<"YES"<<endl;
            cout<<y<<" "<<x<<" "<<x<<endl;
        }else cout<<"NO"<<endl;
    }
}

/* solution two */

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int a = min({x, y, z});
        int b = x + y + z - a - max({x, y, z});
        int c = max({x, y, z});
        if ((x == max(a, b)) && (y == max(a, c)) && (z == max(b, c))) {
            cout << "YES\n" << a << " " << b << " " << c << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
*/
