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
        ll n;
        cin >> n;
        ll x = (n * (n - 1)) / 2;
        vector<int> v(x);
        
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        vector<int> result;

        ll ind = 0;
        ll s = n - 1;

        for (int i = 0; i < n - 1; i++)
        {
            result.push_back(v[ind]);
            ind += s;
            s--;
        }
        result.push_back(v.back());
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
