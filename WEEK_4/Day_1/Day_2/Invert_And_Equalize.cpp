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
        string s;
        cin >> s;
        int cnt1 = 0, cnt0 = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == '1' && s[i] != '1')
                cnt1++;
            if (s[i - 1] == '0' && s[i] != '0')
                cnt0++;
        }
        if (s[n - 1] == '0')
            cnt0++;
        else
            cnt1++;
        int x = min(cnt1, cnt0);
        cout << x << endl;
    }
    return 0;
}