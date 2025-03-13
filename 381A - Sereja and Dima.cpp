#include<iostream>
#include<deque>
using namespace std;
int main(){
    int n,sereja=0,dima=0;
    cin>>n;
    deque<int> card(n);
    for(int i=0; i<n; i++){
        cin>>card[i];
    }

        int i=1;
    while(card.size() !=0){


        if(i%2 !=0){
            if(card.front()>card.back()) {
                sereja+=card.front();
                card.pop_front();
            }else{
                sereja+=card.back();
                card.pop_back();
            }

        }else{
            if(card.front()>card.back()) {
                dima+=card.front();
                card.pop_front();
            }else{
                dima+=card.back();
                card.pop_back();
            }

        }
        ++i;
    }

     cout<<sereja<<" "<<dima<<endl;
}
