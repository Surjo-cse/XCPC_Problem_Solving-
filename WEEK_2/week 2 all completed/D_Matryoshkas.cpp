#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
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
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            //int val = v[i]; 
            if (mp[v[i]] != 0)
            {
                ans++;
                while (mp[v[i]] > 0)
                {
                    mp[v[i]]--;
                    v[i]++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}