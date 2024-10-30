#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK" << endl;
            mp[s]++;
        }
        else
        {
            cout << s << mp[s]++ << endl;
        }
    }
    return 0;
}