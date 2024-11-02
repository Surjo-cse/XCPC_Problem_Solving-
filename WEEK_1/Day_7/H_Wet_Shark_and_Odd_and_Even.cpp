#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    ll minOdd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] % 2 != 0 && v[i] < minOdd)
        {
            minOdd = v[i];
        }
    }
    if (sum % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - minOdd << endl;
    return 0;
}