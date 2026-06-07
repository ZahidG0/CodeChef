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
        int x, a, b;
        cin >> x >> a >> b;

        if ((a * 1 + b * 2) >= x)
        {
            cout << "Qualify\n";
        }
        else
        {
            cout << "NotQualify\n";
        }
    }

    return 0;
}