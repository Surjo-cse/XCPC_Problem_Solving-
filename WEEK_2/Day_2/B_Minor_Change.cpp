#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}