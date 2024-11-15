
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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0, r = n - 1;
        int st = 1, en = n;
        while (l <= r)
        {
            if (v[l] == st)
            {
                l++;
                st++;
            }
            else if (v[l] == en)
            {
                l++;
                en--;
            }
            else if (v[r] == st)
            {
                r--;
                st++;
            }
            else if (v[r] == en)
            {
                r--;
                en--;
            }
            else
                break;
        }
        if (l > r)
            cout << -1 << endl;
        else
            cout << l + 1 << " " << r + 1 << endl;
    }

    return 0;
}
