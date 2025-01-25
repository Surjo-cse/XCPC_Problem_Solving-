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
        int n;
        cin >> n;
        vector<int> v(n);
        int xr = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            xr ^= v[i];
        }
        int mn = xr;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, xr ^ v[i]);
        }
        cout << mn << endl;
    }
    return 0;
}