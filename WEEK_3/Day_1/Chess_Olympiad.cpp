#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int x = 4 - b;
    if (c < x - c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}