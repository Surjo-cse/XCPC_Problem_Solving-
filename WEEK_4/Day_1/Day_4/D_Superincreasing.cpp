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
        ll n, k, x;
        cin >> n >> k >> x;
        k--;
        ll lsum = 0;
        ll ind = 1;
        bool flag = true;
        for (ll i = 0; i < k; i++)
        {
            lsum += ind;
            if (lsum >= x)
            {
                flag = false;
                break;
            }
            ind *= 2;
        }

        if (!flag)
        {
            cout << "No" << endl;
            continue;
        }

        ll xsum = lsum + x;

        ll rsum = 0;
        for (ll i = k + 1; i < n; i++)
        {
            rsum += xsum;
            xsum *= 2;
        }

        if (rsum < LLONG_MAX)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
