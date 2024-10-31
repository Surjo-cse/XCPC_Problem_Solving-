#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char> st;
    for(int i=0; i<s.size(); i++)
    {
        st.insert(s[i]);
    }
    int l = s.size();
    vector<char> v(l);
    v.clear();
    if(st.size()==26)
    {
        cout<<"None"<<endl;
    }
    else
    {
        for(auto x: st)
        {
             v.push_back(x);
        }
        if(v[0]!='a') cout<<'a'<<endl;
        else
        {
                    for(int i=0; i<v.size(); i++)
          {
            if(v[i+1]!=v[i]+1)
            {
                char c = v[i]+1;
                cout<<c;
                break;
            }
          }
        }

    }
    return 0;
}