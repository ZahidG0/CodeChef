#include <iostream>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    int chefu = y + y;
    if (x >= chefu)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}