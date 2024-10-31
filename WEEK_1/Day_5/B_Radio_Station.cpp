#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[b] = a;
    }
    for (int i = 0; i < m; i++)
    {
        string p, b;
        cin >> p >> b;
        b.pop_back();
        cout << p << " " << b << "; #" << mp[b] << endl;
    }
    return 0;
}