#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;

    if (x * 100 >= n)
    {
        cout << "0\n";
    }
    else
    {
        int extraPass = n - (x * 100);
        int neededPla = (extraPass + 99) / 100;

        cout << neededPla << '\n';
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