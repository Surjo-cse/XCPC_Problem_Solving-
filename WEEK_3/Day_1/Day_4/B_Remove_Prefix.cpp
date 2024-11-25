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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = mp[v[i]]++;

            if (x > 0)
                break;
            cnt++;
        }
        cout << n - cnt << endl;
    }
    return 0;
}
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
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         map<int, int> mp;
//         int cnt = 0;  // Count of elements in the suffix with unique elements
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (mp[v[i]] > 0)  // If the element has been seen before, break
//                 break;
//             mp[v[i]]++;
//             cnt++;
//         }

//         cout << n - cnt  << endl;  // Prefix length to remove
//     }

//     return 0;
// }
