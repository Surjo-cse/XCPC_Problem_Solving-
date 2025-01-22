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
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout<<"YES"<<endl; 
            if (n == 2)
                cout << "AA" << endl;
            else
            {
                int x = n / 2;
                while (x--)
                {
                    cout << "AAB";
                }
                cout << endl;
            }
        }
    }
    return 0;
}