#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        vector<ll> h(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        ll l = 0, r = 0, sum = 0, ans = 0;
        while (r < n)
        {
            sum += a[r];
            if (((r + 1) < n) && (sum <= k) && ((h[r] % h[r + 1]) == 0))
            {
                ans = max(ans, (r - l) + 1);
                r++;
            }
            else
            {
                if (((r + 1) < n) && ((h[r] % h[r + 1]) != 0))
                {
                    if (sum <= k)
                    {
                        ans = max(ans, (r - l) + 1);
                    }
                    l = r + 1;
                    r = l;
                    sum = 0;
                }
                else
                {
                    if (sum <= k)
                    {
                        ans = max(ans, (r - l) + 1);
                    }
                    sum -= a[l];
                    l++;
                    r++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}