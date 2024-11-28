#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(int i, int j, int n, int m, vector<vector<int>> &ar)
{
    ll ans = 0;

    int ind = 0;
    while (i - ind >= 0 && j - ind >= 0)
    {
        ans += ar[i - ind][j - ind];
        ind++;
    }

    ind = 0;
    while (i - ind >= 0 && j + ind < m)
    {
        ans += ar[i - ind][j + ind];
        ind++;
    }

    ind = 0;
    while (i + ind < n && j + ind < m)
    {
        ans += ar[i + ind][j + ind];
        ind++;
    }

    ind = 0;
    while (i + ind < n && j - ind >= 0)
    {
        ans += ar[i + ind][j - ind];
        ind++;
    }
    ans -= 3 * ar[i][j];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> ar(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
            }
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans = max(ans, solve(i, j, n, m, ar));
            }
        }

        cout << ans << endl;
    }

    return 0;
}
