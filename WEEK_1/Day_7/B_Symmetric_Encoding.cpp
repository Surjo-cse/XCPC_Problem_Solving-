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
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        vector<char> v;
        for (auto u : st)
        {
            v.push_back(u);
        }
        int l = 0, r = st.size() - 1;
        map<char, char> mp;
        while (l <= r)
        {
            mp[v[l]] = v[r];
            mp[v[r]] = v[l];
            l++;
            r--;
        }
        for (auto x : s)
        {
            cout << mp[x];
        }
        cout<<endl; 
    }
    return 0;
}