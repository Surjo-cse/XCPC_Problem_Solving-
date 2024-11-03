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
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    int cnt = 0, prob = 1; 
    while (!st.empty())
    {
        auto lb = st.lower_bound(prob); 
        if(lb!=st.end())
        {
            cnt++; 
            st.erase(lb); 
        }
        else 
        break; 
        prob++; 
    }
    
    cout << cnt  << endl;
    return 0;
}