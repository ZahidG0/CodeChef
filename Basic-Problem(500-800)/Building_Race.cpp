#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a * y < b * x)
    {
        cout << "Chef\n";
    }
    else if (b * x < a * y)
    {
        cout << "Chefina\n";
    }
    else
    {
        cout << "Both\n";
    }
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