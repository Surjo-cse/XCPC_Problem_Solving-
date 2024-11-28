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
        int ar[n][n];
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ar[i][j];
                if (j == 0)
                {
                    v.push_back(ar[i][j]);
                    // cout<<ar[i][j]<<" ";
                }
            }
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        int loc, add;
        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]] == 1)
                loc = i;
            else
                add = v[i];
        }
        // cout<<loc<<" "<<add<<endl;
        vector<int> ans(n);
        ans[0] = add;
        cout << ans[0] << " ";
        if (loc == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    if (i == 0)
                    {
                        cout << ar[i][j] << " ";
                    }
                }
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    if (i == loc)
                    {
                        cout << ar[i][j] << " ";
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}
