#include <iostream>
#include <algorithm>
using namespace std;

int main() {
        int t;
        cin>>t;
        while(t--){
            int s1,s2,s3,s4;
            cin>>s1>>s2>>s3>>s4;

            int f1=max(s1,s2);
            int f2=max(s3,s4);
            int m1=min(s1,s2);
            int m2=min(s3,s4);

            if(f1>m2 && f2>m1) cout<<"YES\n";
            else cout<<"NO\n";
        }
}

