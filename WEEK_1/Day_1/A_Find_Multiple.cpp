#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            flag = true;
            cout << i << endl;
            break;
        }
    }
    if (!flag)
        cout << -1 << endl;
    return 0;
}