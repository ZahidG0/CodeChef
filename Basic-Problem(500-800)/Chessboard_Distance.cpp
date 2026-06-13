#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x_distance = abs(x1 - x2);
    int y_distance = abs(y1 - y2);

    cout << max(x_distance, y_distance) << '\n';
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