#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    set<string> st;
    while(t--)
    {
        string s;
        getline(cin, s);
        st.insert(s);
    }
 
    cout<<st.size()<<endl;
    return 0;
}