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
        int n, s;
        cin >> n >> s;
        int ar[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            // v[i] = v[i]+i;
        }
        for (int i = 1; i <= n; i++)
        {
            ar[i] = ar[i] + i;
        }
        sort(ar + 1, ar + n + 1);
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s >= ar[i])
            {
                s -= ar[i];
                ans = i;
            }
            else
                break;
        }
        cout << ans << endl;
    }

    return 0;
}