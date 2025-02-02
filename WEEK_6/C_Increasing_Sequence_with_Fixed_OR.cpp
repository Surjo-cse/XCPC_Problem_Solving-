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
        deque<ll> ans;
        for (int k = 0; k <= __lg(n); k++)
        {
            if ((n >> k) & 1)
            {
                ll val = n - (1LL << k);
                if (val > 0)
                {
                    ans.push_front(val);
                }
            }
        }
        ans.push_back(n);
        cout << ans.size() << endl;
        for (auto u : ans)
        {
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}