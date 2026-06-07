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
        if (x <= 50)
            cout << "LEFT\n";
        else
            cout << "RIGHT\n";
    }

    return 0;
}