#include <iostream>
using namespace std;

int main() {

    int x, y, z;
    cin >> x >> y >> z;

    int total_calories = y * z;

    if (total_calories > x)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << x - total_calories << endl;
    }

    return 0;
}