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
    { int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> v(m);
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        string t;
        cin >> t;
        sort(t.begin(), t.end());
        int ind = 0;
        for (auto x : st)
        {
            s[x] = t[ind++];
        }
        cout << s << endl;
    }

    return 0;
}