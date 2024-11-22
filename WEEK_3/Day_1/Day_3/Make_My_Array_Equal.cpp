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
            if (v[i] != 0)
            {
                mp[v[i]]++;
            }
        }

        if (mp.size() == 1 || mp.size() == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}