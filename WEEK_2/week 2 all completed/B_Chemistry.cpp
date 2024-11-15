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

        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        map<char, int> mp;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int x = mp[s[i]]++;
            // cout<<x<<" ";
            v.push_back(x);
        }
        int oddcnt = 0;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            if (mp[ch] % 2 == 1)
                oddcnt++;
        }
        int x = oddcnt - 1;

        if (b >= x)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}