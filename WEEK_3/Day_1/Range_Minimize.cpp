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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }
      int a, b, c, d, x, y;
      sort(v.begin(), v.end());
      x = *max_element(v.begin(), v.end());
      y = *min_element(v.begin(), v.end());
      a = *max_element(v.begin() + 2, v.end());
      b = *min_element(v.begin() + 2, v.end());
      c = *max_element(v.begin(), v.end() - 2);
      d = *min_element(v.begin(), v.end() - 2);
      int z = min((c - d), min((x - y), (a - b)));
      cout << z << endl;
   }

   return 0;
}