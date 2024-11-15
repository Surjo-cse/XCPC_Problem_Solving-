#include <bits/stdc++.h>
using namespace std;
 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   int n;
   cin >> n;
   set<pair<int, int>> s;
   multiset<pair<int, int>> ml;
   vector<int> ans;
   int customerNo = 1;
   for (int i = 1;i <= n;i++) {
      int type;
      cin >> type;
      if (type == 1) {
         int x;
         cin >> x;
         s.insert({ customerNo,x });
         ml.insert({ x,-customerNo });
         customerNo++;
      }
      else if (type == 2) {
         int pos = s.begin()->first, money = s.begin()->second;
         ans.push_back(pos);
         s.erase(s.begin());
         ml.erase({ money,-pos });
      }
      else {
         int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
         ans.push_back(pos);
         ml.erase(--ml.end());
         s.erase({ pos,money });
      }
   }
 
   for (auto val : ans) {
      cout << val << " ";
   }
   cout << '\n';
   return 0;
}