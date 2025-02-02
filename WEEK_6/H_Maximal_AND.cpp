#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int B = 30;
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> Bits(B + 1);
        for (int i = 0; i < n; i++)
        {
            for (int k = B; k >= 0; k--)
            {
                if ((v[i] >> k) & 1)
                {
                    Bits[k]++;
                }
            }
        }
        ll ans = 0;
        for (int k = B; k >= 0; k--)
        {
            if (Bits[k] == n)
            {
                ans += (1LL << k);
            }
            else
            {
                int Nbit = n - Bits[k];
                if (m >= Nbit)
                {
                    ans += (1LL << k);
                    m -= Nbit;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}