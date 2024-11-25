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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        ll ans = 0;

        for (int i = 0; i < min(m, n); i++)
        {
            int mn = min(1ll *b[i]*h, 1ll * a[i]);
            ans += mn;
        }
        cout << ans << endl;
    }
    return 0;
}
