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
        int n, x, p;
        cin >> n >> x >> p;

        int correct_mark = x * 3;
        int nega_mark = n - x;
        int for_pass = correct_mark - nega_mark;

        if (for_pass >= p)
        {
            cout << "PASS\n";
        }
        else
        {
            cout << "FAIL\n";
        }
    }

    return 0;
}