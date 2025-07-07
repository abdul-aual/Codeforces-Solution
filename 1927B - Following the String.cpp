#include <iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        map<char, int> freq;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        string s="";
        char current_char='a';
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                s+=current_char;
                freq[current_char]=1;
                ++current_char;
            }else{
                for(char c='a'; c<='z'; c++){
                    if(freq[c]==arr[i]){
                        s+=c;
                        ++freq[c];
                        break;
                    }
                }
            }

        }
        cout<<s<<endl;
    }
}
