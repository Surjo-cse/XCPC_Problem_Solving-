#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x = s.size();
    if(x==4)
    {
        cout<<s<<endl;
    }
    else if(x==3) cout<<"0"<<s<<endl;
    else if(x==2) cout<<"00"<<s<<endl;
    else if(x==1) cout<<"000"<<s<<endl;

    return 0;
}