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
        int a, b;
        cin >> a >> b;
        if (2 * a > b)
            cout << "FIRST\n";
        else if (2 * a < b)
            cout << "SECOND\n";
        else
            cout << "ANY\n";
    }

    return 0;
}