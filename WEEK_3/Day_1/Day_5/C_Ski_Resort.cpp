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
        int n, q, k;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        ll seg = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
                seg++;
            if (i == n - 1 || v[i + 1] > q)
            {
                if (seg >= k)
                {
                    ll x = seg - k + 1;
                    ll add = (x * (x + 1)) / 2;
                    ans += add;
                }
                seg = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}