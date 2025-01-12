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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x = v[i] % 2;
            if (x == 0)
                ans += v[i] / 2;
            else
                ans += (v[i] / 2) + 1;
        }
        cout << ans << endl;
    }
    return 0;
}