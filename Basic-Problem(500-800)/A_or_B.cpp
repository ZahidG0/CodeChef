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
        int x, y;
        cin >> x >> y;

        // Order A → B
        int ab = (500 - x * 2) + (1000 - (x + y) * 4);

        // Order B → A
        int ba = (1000 - y * 4) + (500 - (x + y) * 2);

        cout << max(ab, ba) << '\n';
    }

    return 0;
}