#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    stack<string> st;
    while (t--)
    {
        string s;
        cin >> s;
        st.push(s);
    }

    set<string> ans;
    while (!st.empty())
    {
        if (ans.find(st.top()) == ans.end())
        {
            ans.insert(st.top());
            string pr = st.top();
            if (pr.size() > 2)
                cout << pr.substr(pr.size() - 2);
        }

        st.pop();
    }
    // while(!st.empty())
    // {
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    // for(auto x: ans) cout<<x<<endl;

    return 0;
}