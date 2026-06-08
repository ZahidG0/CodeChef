#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> digits;
    digits.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        for (int j = 0; j < digits.size(); j++)
        {
            int product = digits[j] * i + carry;
            digits[j] = product % 10;
            carry = product / 10;
        }
        while (carry)
        {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        cout << digits[i];
    }
    cout << "\n";
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