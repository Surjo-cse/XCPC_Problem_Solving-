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
        string s;
        cin >> s;
        int n = s.size();
        char x, y;
        bool flag = true;

        for (int i = 0; i < s.size() - 1; i++)
        {
            cout << s[i];
            if (s[i] == s[i + 1] && flag)
            {
                flag = false;
                if (s[i] == 'a')
                    cout << "b";
                else
                    cout << "a";
            }
        }
        cout << s[n - 1];
        if (flag)
        {
            if (s[n-1] == 'a')
                cout << "b";
            else
                cout << "a";
        }
        cout<<endl; 
    }

    return 0;
}
