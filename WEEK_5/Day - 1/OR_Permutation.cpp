#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin>>t; 
    while (t--)
    {
       int n; 
       cin>>n; 
       for(int i=n; i>=1; i--)
       {
          cout<<i<<" "; 
       }
       cout<<endl; 
    }
    
    return 0;
}