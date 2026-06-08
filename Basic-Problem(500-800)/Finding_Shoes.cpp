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
        int n, m;
        cin >> n >> m;

        if (m >= n)
        {
            cout << n << endl;
        }
        else
        {
            int needed = n - m;
            cout << needed + n << endl;
        }
    }

    return 0;
}