#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, even_time, odd_time;
    cin >> n >> even_time >> odd_time;

    int even_num = n / 2;
    int odd_num = n - even_num;

    int total = (even_num * even_time) + (odd_num * odd_time);
    cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}