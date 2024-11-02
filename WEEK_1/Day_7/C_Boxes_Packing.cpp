#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    vector<int> nv;
    int mx  = 0; 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++; 
        if(mx<mp[v[i]])
        mx = mp[v[i]]; 
    }
      cout<<mx<<endl; 
    return 0;
}