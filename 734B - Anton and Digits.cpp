#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;

    int min256=min({k2,k5,k6});
    int sum1=min256*256;
    int n32=min(k3,(k2 - min256));
    int sum2=n32*32;
    cout<<sum2+sum1<<endl;
}


/* below solution version is without using STL   */
/*

#include <iostream>
using namespace std;

int main() {
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int min1,min2;
    if(k2<=k5 && k2<=k6) min1=k2;
    else if(k5<=k2 && k5<=k6) min1=k5;
    else min1=k6;
    k2-=min1;
    if(k2<=k3) min2=k2;
    else min2=k3;

    int n256=min1*256;
    int n32=min2*32;
    cout<<n32+n256<<endl;

}
*/
