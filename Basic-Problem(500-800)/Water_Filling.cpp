#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;

        int total_sum = b1 + b2 + b3;
        cout << ((total_sum >= 2) ? "Not now" : "Water filling time") << endl;

        /* int count = 0;
        if (b1 == 1)
        {
            count++;
        }
        if (b2 == 1)
        {
            count++;
        }
        if (b3 == 1)
        {
            count++;
        }

        cout << ((count >= 2) ? "Not now" : "Water filling time") << endl; */
    }

    return 0;
}