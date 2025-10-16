#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int vectorSize;
        cin >> vectorSize;
        vector<int> integerVector;

        int countOdd = 0;
        int countEven = 0;

        for (int i = 0; i < vectorSize; i++)
        {
            int inputValue;
            cin >> inputValue;
            integerVector.push_back(inputValue);

            if (inputValue % 2 == 0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }

        if (countEven >= 2 || countOdd >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}