#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int N, X, K;
        cin >> N >> X >> K;

        int posible_bottles = K / X;
        if(posible_bottles >= N)
            cout << N << endl;
        else
            cout << posible_bottles << endl;
    }

    return 0;
}