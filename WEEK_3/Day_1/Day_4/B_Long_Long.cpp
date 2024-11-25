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
        ll sum = 0;
        bool flag = true;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
            if (v[i] == 0)
                continue;
            else if (v[i] < 1)
            {
                if (flag)
                {
                    cnt++;
                    flag = false;
                }
            }
            else
                flag = true;
            // cout << v[i] << " -> " << cnt << endl;
        }
        cout << sum << " " << cnt << endl;
    }

    return 0;
}