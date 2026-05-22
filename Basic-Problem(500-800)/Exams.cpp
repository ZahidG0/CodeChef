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
        int x, y, z;
        cin >> x >> y >> z;

        int total_st = x * y;
        if (z > total_st/2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    


    return 0;
}