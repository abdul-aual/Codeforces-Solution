#include <iostream>
using namespace std;

int main() {


        string s;
        int low=0,up=0;
        cin>>s;
        int n=s.size();
        string s_lower[n],s_up[n];

        for(int i=0; i<n; i++)
        {
            if(islower(s[i])) low++;
            else up++;
            s_lower[i]=tolower(s[i]);
            s_up[i]=toupper(s[i]);
        }


        if(low>=up)
        {
            for(int i=0; i<n; i++)
            {
                cout<<s_lower[i];
            }
            cout<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout<<s_up[i];
            }
            cout<<endl;
        }








        return 0;



}
