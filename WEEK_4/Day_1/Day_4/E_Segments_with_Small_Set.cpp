#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> freq;
    int x = 0;
    int l = 0;
    long long ans = 0;
    for (int r = 0; r < n; r++)
    {
        if (freq[a[r]] == 0)
        {
            x++;
        }
        freq[a[r]]++;
        while (x > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                x--;
            }
            l++;
        }
        ans += (r - l + 1);
    }
    cout << ans << endl;
    return 0;
}
