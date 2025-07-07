#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> numbers(n);
    for(int i=0; i<n; i++){
        cin>>numbers[i];
    }
    int len=numbers[0].length();
    int codeLen=0;

    for(int i=0; i<len; i++){
        char current_char = numbers[0][i];
        bool allmatch=true;
        for(int j=1; j<n; j++){

            if(numbers[j][i] !=current_char){
                allmatch=false;
                break;
            }
        }
        if(allmatch) codeLen++;
        else
            break;

    }

    cout<<codeLen<<endl;
}
