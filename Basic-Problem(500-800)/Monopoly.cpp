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
        int p, q, r, s;
        cin >> p >> q >> r >> s;

        int total = p + q + r + s;

        if (p > total - p || q > total - q || r > total - r || s > total - s)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        /* if (p > q+r+s || q > p+r+s || r > p + q+ s || s > p+q+r)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        } */
    }

    return 0;
}