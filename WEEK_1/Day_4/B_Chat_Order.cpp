#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<string> v(t);
    map<string, int> mp;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    for (int i = t - 1; i >= 0; i--)
    {
        mp[v[i]]++;
        if (mp[v[i]] == 1)
            cout << v[i] << endl;
    }
    return 0;
}