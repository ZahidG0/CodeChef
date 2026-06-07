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
        int n, x;
        cin >> n >> x;

        if (x >= n)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << ceil((n - x) / 4.0) << '\n';
        }
    }

    return 0;
}