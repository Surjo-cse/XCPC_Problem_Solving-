#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    ll ans = 0;
    while (l < n && r < m)
    {
        int cur = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && cur == a[l])
        {
            l++;
            cnt1++;
        }
        while (r < m && cur > b[r])
        {
            r++;
        }

        while (r < m && cur == b[r])
        {
            r++;
            cnt2++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;
    return 0;
}