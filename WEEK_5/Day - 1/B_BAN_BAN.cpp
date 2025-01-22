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
        int l = 2, r = n*3;
        vector<pair<int, int>> ans; 
        while (l <= r)
        {
            ans.push_back({l, r}); 
            //cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
        cout<<ans.size()<<endl; 
        for(auto u: ans)
        {
            cout<<u.first<<" "<<u.second<<endl; 
        }
    }
    

    return 0;
}