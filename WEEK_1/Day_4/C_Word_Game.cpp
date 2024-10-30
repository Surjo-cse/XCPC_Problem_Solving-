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
        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(4);
        for (auto p : mp)
        {
            vector<int> cnt = p.second;
            if (cnt.size() == 1)
            {
                ans[cnt[0]] += 3;
            }
            else if (cnt.size() == 2)
            {
                ans[cnt[0]]++;
                ans[cnt[1]]++;
            }
        }
        for (int i = 1; i <= 3; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}