#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, r;
    cin >> x >> y >> r;

    int extra_stick = r / 30;
    int total_stick = extra_stick + x;
    int plate = (total_stick + (y - 1)) / y;
    cout << plate << endl;
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