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
        // priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // q.push(v[i]);
        }
        ll ans = 0, x = 0, y = 0;
        sort(v.begin(), v.end());
        vector<int> p;
        vector<int> q;
        int r = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                p.push_back(v[i]);
                // l++;
            }
            else
            {
                q.push_back(v[i]);
            }
        }
      

        sort(q.rbegin(), q.rend());
        int l = 0;
        int m = q.size();
        while (m--)
        {
            p.push_back(q[l++]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans += p[i] + p[i + 1];
        }
        cout << ans << endl;
    }
    return 0;
}