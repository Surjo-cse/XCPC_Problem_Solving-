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
        int n, k;
        cin >> n >> k;

        if (k == 0)
        {
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                cout << i << " ";
            }
            for (int i = n; i >  k ; i--)
            {
                cout << i << " ";
            }
        }
        cout << endl;

    }

    return 0;
}