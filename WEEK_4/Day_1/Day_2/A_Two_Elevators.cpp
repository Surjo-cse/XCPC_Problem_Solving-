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
        int a, b, c;
        cin >> a >> b >> c;
        int x = (a - 1);
        int y = (abs(b - c) + abs(c - 1));
        if (x == y)
            cout << 3 << endl;
        else if (x > y)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}