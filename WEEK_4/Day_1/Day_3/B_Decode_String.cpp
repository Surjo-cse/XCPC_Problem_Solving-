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
        string s;
        cin >> s;
        int l = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] != '0' && i + 2 < n && s[i + 2] == '0'&&s[i+3]!='0')
            {
                int x = ((s[i] - 48) * 10 + (s[i + 1] - 49));
                char c = x + 'a';
                cout << c;
                i += 2;
            }
            else if (s[i] == '0')
            {
                i++;
                continue;
            }
            else
            {
                char c = s[i] + 48;
                cout << c;
                // cout<<s[i]<<endl;
                i++;
            }
        }
        cout << endl;
    }

    return 0;
}