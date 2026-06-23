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
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());

        cout << v[1] << '\n';

        // if(a < b) swap(a, b);
        // if(a < c) swap(a, c);
        // if(b < c) swap(b, c);

        // cout << b << endl;
    }

    return 0;
}