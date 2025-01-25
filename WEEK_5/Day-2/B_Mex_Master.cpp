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
        int zero = 0, notZero = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                zero++;
            else
                notZero++;
        }
        if (zero == 0)
            cout << 0 << endl;
        else if (notZero >= zero - 1)
            cout << 0 << endl;
        else
        {
            int x = *max_element(v.begin(), v.end());
            if (x == 1)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}