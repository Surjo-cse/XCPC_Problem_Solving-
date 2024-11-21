#include <bits/stdc++.h>
#include <iostream>
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
         int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == 'W')
                cnt++;
        }
        int ans = cnt;
        for (int i = m; i < n; i++)
        {
            if (s[i] == 'W')
                cnt++;
            if (s[i - m] == 'W')
                cnt--;
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}