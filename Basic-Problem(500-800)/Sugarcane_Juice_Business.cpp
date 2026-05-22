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
        int n;
        cin >> n;

        int total_inc = n * 50;

        int profit = total_inc * 30 / 100;

        cout << profit << endl;
    }

    return 0;
}