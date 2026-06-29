#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    int gold = 0;
    if (x != a && x != b)
    {
        gold++;
    }
    if (y != a && y != b)
    {
        gold++;
    }
    cout << gold << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}