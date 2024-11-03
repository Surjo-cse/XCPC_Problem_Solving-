#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    set<int> st;
    vector<int> vn(n + 1);

    for (int i = n; i >= 1; i--)
    {
        st.insert(v[i]);
        vn[i] = st.size();
    }
    for (int i = 1; i <= m; i++)
    {
        int q;
        cin >> q;
        cout << vn[q] << endl;
    }

    return 0;
}