#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

   int a = n/100;
   n=n%100;
   int b = n/20;
   n=n%20;
   int c=n/10;
   n=n%10;
   int d = n/5;
   n=n%5;
   cout<<a+b+c+d+n<<endl;

    return 0;
}
/*

---- OR YOU CAN DO THE SAME TASK IN BELOW METHO----

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int denominations[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        count += n / denominations[i];
        n %= denominations[i];
    }

    cout << count << endl;
    return 0;
} */


