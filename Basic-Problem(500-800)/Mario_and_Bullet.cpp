#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int travel_time = y / x;
        int ans = max(0, z - travel_time);
        cout << ans << "\n";
    }

    return 0;
}