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
        int a[n];
        int ar[n];
        map<int, int> mp;
        vector<int> zero;
        vector<int> one;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
           // ar[i] = a[i];
            mp[a[i]] = i;
        }
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero.push_back(a[i]);
            else
                one.push_back(a[i]);
        }
        sort(a, a + n);
        sort(zero.rbegin(), zero.rend());
        sort(one.rbegin(), one.rend());
        reverse(a, a + n);
        int i;
        for (i = 0; i < one.size(); i++)
        {
            ar[mp[one[i]]] = a[i];
        }
        for (int j = 0; j < zero.size(); j++)
        {
            ar[mp[zero[j]]] = a[i];
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    return 0;
}