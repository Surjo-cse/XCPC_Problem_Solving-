#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> p(n);
    vector<int> q(m);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    for (int i = 0; i < m; i++)
        cin >> q[i];

    vector<int> x;
    int l = 0, r = 0;

    while (l < n || r < m)
    {
        if (l < n && (r >= m || p[l] <= q[r]))
        {
            x.push_back(p[l]);
            l++;
        }
        else if (r < m)
        {
            x.push_back(q[r]);
            r++;
        }
    }

    for (auto u : x)
        cout << u << " ";

    return 0;
}
