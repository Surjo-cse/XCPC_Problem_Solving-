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
        ll n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> presum(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            presum[i] = v[i];
        }
        for (int i = 1; i < n; i++)
        {
            presum[i] += presum[i - 1];
        }
        string s;
        cin >> s;
        ll ans = 0, l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] == 'R')
            {
                l++;
            }
            else
            {
                if (s[r] == 'L')
                {
                    r--;
                }
                else
                {
                    ans += presum[r];
                    if (l > 0)
                    {
                        ans -= presum[l - 1];
                    }
                    l++;
                    r--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}