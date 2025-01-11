#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0;
    ll sum = 0;
    int l = 0;

    for (int r = 0; r < n; r++)
    {
        sum += v[r];

        while (sum >= s)
        {
            ans += (n - r);
            sum -= v[l];
            l++;
        }
    }

    cout << ans << endl;

    return 0;
}
