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
        map<int, string> mp;

        for (int i = 0; i < n; i++)
        {
            int m, up = 0, dn = 0;
            string d;

            cin >> m >> d;
            for (int j = 0; j < d.size(); j++)
            {
                if (d[j] == 'U')
                    up++;
                else
                    dn++;
            }
            int x = dn - up;

            v[i] += x;
            // if(v[i]<0) v[i] *= -1;
            if (v[i] > 9)
            {
                cout << v[i] % 9 - 1 << " ";
            }
            else if (v[i] < 0)
                cout << 10 + v[i] << " ";
            else
                cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}