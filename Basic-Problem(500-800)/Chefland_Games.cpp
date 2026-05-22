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
        int x1, x2, x3, x4;
        cin >> x1 >> x2 >> x3 >> x4;

        int sum = x1 + x2 + x3 + x4;

        if (sum >= 1)
        {
            cout << "OUT" << endl;
        }
        else
        {
            cout << "IN" << endl;
        }
    }

    return 0;
}