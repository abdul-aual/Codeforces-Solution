#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int n;
double sum=0;
cin>>n;
int arr[n-1];
for(int i=0; i<=n-1; i++)
{
    cin>>arr[i];
}

for(int i=0; i<=n-1; i++)
{
    sum+=arr[i];
}
cout<<fixed<<setprecision(12)<<sum/n<<endl;


return 0;
}
