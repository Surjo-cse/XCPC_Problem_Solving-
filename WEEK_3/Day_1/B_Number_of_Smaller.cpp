#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    vector<int> q(m);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    int l = 0, r = 0;


    while (r < m)
    {
        while (l < n && p[l] < q[r])
        {
            l++;
        }
        cout << l <<" ";
        r++;
    }

    return 0;
}