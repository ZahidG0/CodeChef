#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int aspect_res = 21 - (a + b);

    if (aspect_res > 10 || aspect_res < 1)
    {
        cout << "-1\n";
    }
    else
    {
        cout << aspect_res << '\n';
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