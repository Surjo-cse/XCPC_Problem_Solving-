#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    string s; 
    cin>>s; 
    map<char, int> mp; 
    for(int i=0; i<n; i++)
    {
        mp[s[i]]++; 
    }
    for(auto x: mp)
    {
        cout<<x.first<<" -> "<<x.second<<endl; 
    }
    return 0;
}