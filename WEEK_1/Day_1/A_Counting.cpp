#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if (a < b)
        cout << (b - a) + 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}