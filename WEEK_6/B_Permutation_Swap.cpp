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
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            res = __gcd(res, abs(x - i));
        }
        cout << res << endl;
    }
    return 0;
}