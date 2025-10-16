#include <bits/stdc++.h>
using namespace std;

int main()
{
    int integerValue;
    int minValue = INT_MAX;
    while (cin >> integerValue)
    {
        if (integerValue < minValue)
        {
            minValue = integerValue;
        }
    }

    cout << minValue;

    return 0;
}