#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while (t--)
    {
        int n;
        cin >> n;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]] = 0;
        }
        // int x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            for (auto u : mp)
            {
                if (u.second == v[i])
                {
                    cout << u.first;
                    mp[u.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}