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
        int x;
        cin >> x;
        int rev = 0;
        while (x > 0)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        cout << rev << "\n";
    }

    return 0;
}