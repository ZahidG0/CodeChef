// this is my solution

/* #include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        cout << ((x * y >= a * b) ? "Yes\n" : "No\n");
    }

    return 0;
} */

#include <iostream>

using namespace std;

void solve() {
    int A, B, X, Y;
    if (!(cin >> A >> B >> X >> Y)) return;

    // Calculate total requirement and total supply
    // Using long long is a good habit if constraints were larger
    long long totalRequired = (long long)A * B;
    long long totalAvailable = (long long)X * Y;

    if (totalAvailable >= totalRequired) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    // Optimization for faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}