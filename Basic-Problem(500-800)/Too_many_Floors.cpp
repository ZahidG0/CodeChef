#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int floor_x = (x + 9) / 10;
    int floor_y = (y + 9) / 10;

    int floor_dis = abs(floor_x - floor_y);

    cout << floor_dis << '\n';
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