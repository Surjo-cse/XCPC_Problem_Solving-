#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; 
    cin>>n>>m; 
    string a, b; 
    string x, y; 
    map<string, string> mp; 
    for(int i=0; i<n; i++)
    {
        
        cin>>a>>b; 
        mp[a] = b; 
        mp[b] = a; 
    }
    map<string, string> ip; 
    for(int i=0; i<m; i++)
    {
        
        cin>>x>>y; 
        ip[x] = y;
        ip[y] = x ; 
    }
     cout<<ip[y]<<" "<<ip[x]<<"; #"<<mp[b]<<endl;
    while(m--)
    {
        if(mp[a]==ip[x])
        {
            cout<<ip[y]<<" "<<ip[x]<<"; #"<<mp[b]<<endl; 
        }
    }
    return 0;
}