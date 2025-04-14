#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        float sum=0;
        cin>>n;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            sum+=a;
        }
        if(sum==n) cout<<0<<endl;
        else if(sum>n) cout<<sum-n<<endl;
        else cout<<1<<endl;

    }
}
