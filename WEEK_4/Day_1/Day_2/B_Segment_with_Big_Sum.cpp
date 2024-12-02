#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = INT_MAX;
    ll sum = 0;
    int l = 0;

    for (int r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
    }

    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}
