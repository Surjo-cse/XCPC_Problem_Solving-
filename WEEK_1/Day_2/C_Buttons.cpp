#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int x = abs(a-b);
    int mx = max(a, b);
    if(x==0)
    {
        cout<<a+a<<endl;
    }
    else
        cout<<(mx+(mx-1))<<endl;
    return 0;
}