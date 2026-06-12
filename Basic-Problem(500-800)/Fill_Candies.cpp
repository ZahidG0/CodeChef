#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, m;
    cin >> n >> k >> m;

    int capacity = k * m;
    int res = (n + (capacity - 1)) / capacity;

    cout << res << '\n';
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