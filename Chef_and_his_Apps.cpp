#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s, x, y, z;
    cin >> s >> x >> y >> z;

    int free = s - x - y;
    if (free >= z)
    {
        cout << "0\n";
    }
    else if (free + y >= z)
    {
        cout << "1\n";
    }
    else
    {
        cout << "2\n";
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