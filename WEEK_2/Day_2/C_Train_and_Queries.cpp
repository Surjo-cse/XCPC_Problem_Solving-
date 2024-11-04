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
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            int l, r;
            if ((mp.find(a) == mp.end()) ||( mp.find(b) == mp.end()))
            {
                cout << "NO" << endl;
            }
            else
            {

                l = *mp[a].begin();
                r = *mp[b].rbegin();
                if (l < r)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}