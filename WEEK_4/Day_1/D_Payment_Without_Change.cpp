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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d % c <= b && (a * c) + b >= d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}