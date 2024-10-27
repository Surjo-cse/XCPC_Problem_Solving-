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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sareja = 0, dima = 0;
    int st = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (v[st] > v[end])
        {
            if (i % 2 == 0)
                sareja += v[st++];
            else
                dima += v[st++];
        }
        else
        {
            if (i % 2 == 0)
                sareja += v[end--];
            else
                dima += v[end--];
        }
    }

    cout << sareja << " " << dima << endl;
    return 0;
}
