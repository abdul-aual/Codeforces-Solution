#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int maxE = arr[0];
    int maxI = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxE) {
            maxE = arr[i];
            maxI = i + 1;
        }
    }


    int minE = arr[n - 1];
    int minI = n;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < minE) {
            minE = arr[i];
            minI = i + 1;
        }
    }
if(maxI>minI){
    cout<<(maxI-1)+(n-1-minI)<<endl;
}else{
    cout<<(maxI-1)+(n-minI)<<endl;
}






    return 0;
}

