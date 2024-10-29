#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, string> old, New;

    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if (New.find(a) != New.end())
        {
            string x = New[a];
            old[x] = b;
            New.erase(a);
            New[b] = x;
        }
        else
        {
            old[a] = b;
            New[b] = a;
        }
    }
    cout << New.size() << endl;
    for (auto u : old)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}