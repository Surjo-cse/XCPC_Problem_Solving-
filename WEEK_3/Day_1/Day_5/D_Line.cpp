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
        string s;
        cin >> s;
        vector<ll> v;
        ll total = 0;
        int mnChange = 0;
        for (int i = 0; i < n; i++)
        {
            int l = i;
            int r = n - i - 1;
            if (s[i] == 'L')
            {
                if (r > l)
                {
                    mnChange++;
                    total += r;
                    v.push_back(r - l);
                }
                else
                    total += l;
            }
            else
            {
                if (l > r)
                {
                    mnChange++;
                    total += l;
                    v.push_back(l - r);
                }
                else
                    total += r;
            }
        }
        vector<ll> ans(n + 1);
        for (int i = mnChange; i <= n; i++)
        {
            ans[i] = total;
        }
        sort(v.rbegin(), v.rend());
        for (int i = mnChange - 1; i >= 1; i--)
        {
            total -= v.back();
            v.pop_back();
            ans[i] = total;
        }
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout<<endl; 
    }
    return 0;
}