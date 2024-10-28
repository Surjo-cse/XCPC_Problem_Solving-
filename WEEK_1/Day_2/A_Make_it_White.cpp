#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fp, lp;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B')
            {
                fp = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                lp = i+1;
                break;
            }
        }
        cout<<lp-fp<<endl;
    }
    return 0;
}
 