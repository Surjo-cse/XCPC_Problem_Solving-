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
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v(b);
        for (int i = 0; i < b; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        while (c--)
        {
            int x;
            cin >> x;
            int ub = upper_bound(v.begin(), v.end(), x) - v.begin();
            if (ub == 0)
                cout << v[ub] - 1 << endl;
            else if (ub == b)
                cout << a - v[ub - 1] << endl;
            else
                cout << ((v[ub] - v[ub - 1]) / 2) << endl;
        }
    }
    return 0;
}