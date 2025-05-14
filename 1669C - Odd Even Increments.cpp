#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        bool first_seq=true,sec_seq=true;

        if(arr[0]%2==0){
            for(int i=2; i<n; i+=2){
                if(arr[i]%2 !=0){
                    first_seq=false;
                    break;
                }
            }
        }else{
            for(int i=2; i<n; i+=2){
                if(arr[i]%2==0){
                    first_seq=false;
                    break;
                }
            }
        }

      if(arr[1]%2==0){
          for(int i=3; i<n; i+=2){
              if(arr[i]%2 !=0){
                  sec_seq=false;
                  break;
              }
          }
      }else{
          for(int i=3; i<n; i+=2){
              if(arr[i]%2==0){
                  sec_seq=false;
                  break;
              }
          }
      }



      cout<<((first_seq && sec_seq)? "YES":"NO")<<endl;



    }
}
