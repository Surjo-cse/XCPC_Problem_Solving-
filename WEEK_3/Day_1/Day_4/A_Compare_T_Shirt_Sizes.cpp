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
        string a, b;
        cin >> a >> b;
        if (a == b)
            cout << '=' << endl;
        else
        {
            if (a[a.size() - 1] == 'L' && b[b.size() - 1] == 'L')
            {
                if (a.size() > b.size())
                {
                    cout << '>' << endl;
                }
                else
                {
                    cout << '<' << endl;
                }
            }
            else if (a[a.size() - 1] == 'S' && b[b.size() - 1] == 'S')
            {
                if (a.size() < b.size())
                {
                    cout << '>' << endl;
                }
                else if (a.size() > b.size())
                {
                    cout << '<' << endl;
                }
            }
            else if (a[a.size() - 1] != 'L' && b[b.size() - 1] == 'L')
                cout << '<' << endl;
            else if (a[a.size() - 1] == 'L' && b[b.size() - 1] != 'L')
                cout << '>' << endl;
            else if (a[a.size() - 1] == 'M' && b[b.size() - 1] == 'S')
                cout << '>' << endl;
            else if (a[a.size() - 1] == 'S' && b[b.size() - 1] == 'M')
                cout << '<' << endl;
        }
    }
    return 0;
}