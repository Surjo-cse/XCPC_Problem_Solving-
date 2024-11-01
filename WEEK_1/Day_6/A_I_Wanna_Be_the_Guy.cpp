#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int a;
    cin >> a;
    set<int> m;
    for (int i = 0; i < a; i++)
    {
        int q;
        cin >> q;
        m.insert(q);
    }
    int b;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int y;
        cin >> y;
        m.insert(y);
    }
    if(m.size()==t) cout<< "I become the guy." << endl;
    else cout<< "Oh, my keyboard!" << endl;
    // bool flag = false;
    // for (auto u : m)
    // {
    //     if (u == t)
    //     {
    //         flag = true;
    //         break;
    //     }
    // }
    // if (flag)
    //     cout << "I become the guy." << endl;
    // else
    //     cout << "Oh, my keyboard!" << endl;
    return 0;
}