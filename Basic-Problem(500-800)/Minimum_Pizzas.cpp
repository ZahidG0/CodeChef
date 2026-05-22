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
        int x, y;
        cin >> x >> y;

        int total_slice = x * y;

        int need_slice = (total_slice + 3) / 4;

        cout << need_slice << endl;
    }

    return 0;
}