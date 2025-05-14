#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> students(n);
    cin>>students[0];
    int maxE=students[0];
    int maxI=1;
    for(int i=1; i<n; i++){
        cin>>students[i];
        if(students[i]>=maxE){
            maxE=students[i];
            maxI=i+1;
        }
    }

    if(maxE<=m) cout<<n<<endl;
    else cout<<maxI<<endl;
}
