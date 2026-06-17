#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;

    if (x % 5 != 0)
    {
        cout << "-1\n";
    }
    else
    {
        int ten = x / 10;
        int rem = x % 10;
        int five = rem / 5;
        cout << ten + five << '\n';
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