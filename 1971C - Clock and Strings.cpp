#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=min(a,b);
        int y=max(a,b);
        vector<int> partA,partB;
        for(int i=x+1; i<y; i++){
            partA.push_back(i);
        }
        for(int i=1; i<=12; i++){
            if(i==a || i==b) continue;
            else{
                if(find(partA.begin(),partA.end(),i)==partA.end() ){
                    partB.push_back(i);
                }
            }
        }
        if( find(partA.begin(),partA.end(),c) !=partA.end() && find(partA.begin(),partA.end(),d)!=partA.end() )
        cout<<"NO"<<endl;
        else if( find(partB.begin(),partB.end(),c) !=partB.end() && find(partB.begin(),partB.end(),d)!=partB.end() )
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
