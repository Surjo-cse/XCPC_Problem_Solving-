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
        int len = s.size();
        string x = s; 
        reverse(x.begin(), x.end()); 
        if(s<=x)
        {
            cout<<s<<endl; 
        }
        else 
        {
            cout<<x<<s<<endl; 
        }
       
    }
    

    return 0;
}