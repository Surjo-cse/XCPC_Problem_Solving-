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
        int a, b;
        cin >> a >> b;
        int ans = 0;
        int x = (b + 1) / 2;

        a -= ((x * 15) - (4 * b));
        a = max(a, 0);
        x += (a + 15 - 1) / 15;
        cout << x << endl;
    }
    return 0;
}