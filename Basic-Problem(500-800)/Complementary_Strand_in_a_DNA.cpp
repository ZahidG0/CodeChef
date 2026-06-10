/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        for (char ch : s)
        {
            if (ch == 'A')
                cout << 'T';
            else if (ch == 'T')
                cout << 'A';
            else if (ch == 'C')
                cout << 'G';
            else if (ch == 'G')
                cout << 'C';
        }

        cout << '\n';
    }

    return 0;
} */

// Improving code resive form ai

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (char ch : s) {
            switch (ch) {
                case 'A': cout << 'T'; break;
                case 'T': cout << 'A'; break;
                case 'C': cout << 'G'; break;
                case 'G': cout << 'C'; break;
            }
        }
        cout << '\n';
    }

    return 0;
}