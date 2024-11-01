#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, char> mp;
        set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
        }
        vector<char> v; 
        for (auto u : st)
        {
           v.push_back(u); 
        }
        int l = 0, r = s.size()-1; 
        while(l<=r)
        {
            mp[v[l]] = mp[v[r]]; 
            mp[v[r]] = mp[v[l]]; 
            l++; 
            r--; 
        }
        for(int i=0; i<s.size(); i++)
        {
            cout<<mp[s[i]]; 
        }
    }
    return 0;
}