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
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] >= 1000)
            {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}