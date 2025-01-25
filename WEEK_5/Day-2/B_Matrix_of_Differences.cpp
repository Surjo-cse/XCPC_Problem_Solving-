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
        int i = 1;
        int j = n * n;
        vector<int> v;
        // cout<<1<<" "<<j<<endl;
        while (i < j)
        {
            v.push_back(i++);
            v.push_back(j--);
        }
        if (n % 2 != 0)
        {
            v.push_back(((n * n) + 1) / 2);
        }
        int x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = x; j < x + n; j++)
                    cout << v[j] << " ";
                cout << endl;
                x += n;
            }
            else
            {
                for (int j = (n + x) - 1; j >= x; j--)
                    cout << v[j] << " ";
                cout << endl;
                x += n;
            }
        }
    }

    return 0;
}