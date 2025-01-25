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
        int n, m;
        cin >> n >> m;
        if (m < n)
            cout << "NO" << endl;

        else if (m % 2 == 0 && n % 2 == 0)
        {
            cout << "YES" << endl;

            for (int i = 0; i < n - 2; i++)
            {
                cout << "1 ";
            }
            int x = (m - n + 2) / 2;
            cout << x << " " << x << endl;
        }
        else if (n % 2 != 0 && m % 2 != 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n - 1; i++)
            {
                cout << "1 " << endl;
            }
            int x = m - n + 1;
            cout << x << endl;
        }
        else if (n % 2 == 0 && m % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 != 0 && m % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n - 1; i++)
            {
                cout << "1 ";
            }
            int x = (m - n + 1);
            cout << x << endl;
        }
    }
    return 0;
}