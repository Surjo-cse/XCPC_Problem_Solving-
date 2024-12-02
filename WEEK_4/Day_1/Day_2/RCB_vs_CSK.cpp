#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if (a - b >= 18)
        cout << "RCB" << endl;
    else
        cout << "CSK" << endl;
    return 0;
}