#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        if (x != b)
            cout << x << " ";
    }
    return 0;
}