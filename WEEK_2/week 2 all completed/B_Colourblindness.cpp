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
        string a, b;
        cin >> a >> b;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' && b[i] != 'R')
            {
                flag = false;
                break;
            }
            else if (a[i] == 'B' && b[i] == 'R' || a[i] == 'G' && b[i] == 'R')
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}