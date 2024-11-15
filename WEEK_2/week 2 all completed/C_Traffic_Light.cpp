#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t; 
    while(t--)
    {
        int n; 
        char c; 
        cin>>n>>c; 
        string s; 
        cin>>s; 
        s += s; 
        int l = s.size(); 
        int ans = 0; 
        for(int i= l-1; i>=0; i--)
        {
            if(s[i]=='g') l = i; 
            if(s[i]==c) ans = max(ans, l-i); 
        }
        cout<<ans<<endl; 
    }
    return 0;
}