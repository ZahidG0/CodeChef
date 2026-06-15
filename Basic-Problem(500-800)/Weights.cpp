#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, x, y, z;
    cin >> w >> x >> y >> z;

    if ((x + y) == w || (x + z) == w || (y + z) == w || x + (y + z) == w || x == w || y == w || z == w)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}