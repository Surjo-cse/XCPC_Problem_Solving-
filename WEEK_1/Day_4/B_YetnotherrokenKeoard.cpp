// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int n = s.size();
//         vector<char> big;
//         vector<char> small;
//         vector<bool> ok(n, true);

//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == 'B')
//             {
//                 if (!big.empty())
//                 {
//                     ok[big.back()] = false;
//                     big.pop_back();
//                 }
//                 ok[i] = false;
//             }
//             else if (s[i] == 'b')
//             {
//                 if (!small.empty())
//                 {
//                     ok[small.back()] = false;
//                     small.pop_back();
//                 }
//                 ok[i] = false;
//             }
//             else if (s[i] >= 'A' && s[i] <= 'Z')
//             {
//                 big.push_back(i);
//             }
//             else
//                 small.push_back(i);
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (ok[i])
//                 cout << s[i];
//         }
//         cout << endl;
//     }
//     return 0;
// }
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
        stack<int> big, small;
        vector<bool> ok(n, true);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (!big.empty())
                {
                    ok[big.top()] = false;
                    big.pop();
                }
                ok[i] = false;
            }
            else if (s[i] == 'b')
            {
                if (!small.empty())
                {
                    ok[small.top()] = false;
                    small.pop();
                }
                ok[i] = false;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                big.push(i);
            }
            else
            {
                small.push(i);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (ok[i])
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
