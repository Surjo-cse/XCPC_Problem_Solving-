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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        priority_queue<int> pq;
        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            pq.push(it->second);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--;
            b--;
            if (a >= 1)
                pq.push(a);
            if (b >= 1)
                pq.push(b);
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}