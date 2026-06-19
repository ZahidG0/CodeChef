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
        int a, x, b, y;
        cin >> a >> x >> b >> y;

        // A/X vs B/Y → A*Y vs B*X (cross multiply)
        if (a * y > b * x)
            cout << "Alice\n";
        else if (a * y < b * x)
            cout << "Bob\n";
        else
            cout << "Equal\n";
    }

    return 0;
}