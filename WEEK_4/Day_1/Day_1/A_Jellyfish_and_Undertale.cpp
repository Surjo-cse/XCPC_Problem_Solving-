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
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v(c);
        ll ans = b;
        //cout<<ans<<endl ;
        for (int i = 0; i < c; i++)
        {
            cin >> v[i];
            if(v[i]+1>a)
            ans += a-1;
            else 
            {
                ans += v[i]; 
            }
        }
        cout << ans << endl;
    }
    return 0;
}