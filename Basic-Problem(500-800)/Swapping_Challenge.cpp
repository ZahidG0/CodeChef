#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int B[n];
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
    }

    sort(B, B + n);
    int median = B[n / 2];

    int medianIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == median)
        {
            medianIndex = i;
            break;
        }
    }

    int midIndx = n / 2;
    cout << abs(medianIndex - midIndx) << "\n";


return 0;
}