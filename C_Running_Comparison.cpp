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
        vector<int> firstVector;
        for (int i = 0; i < vectorSize; i++)
        {
            int firstValue;
            cin >> firstValue;
            firstVector.push_back(firstValue);
        }

        vector<int> secondVector;
        for (int i = 0; i < vectorSize; i++)
        {
            int inputValue;
            cin >> inputValue;
            secondVector.push_back(inputValue);
        }

        int count = 0;

        for (int i = 0; i < vectorSize; i++)
        {
            if (firstVector[i] == secondVector[i])
            {
                count++;
            }
            else if (firstVector[i] / 2 == secondVector[i])
            {
                count++;
            }
            else if (firstVector[i] == secondVector[i] / 2)
            {
                count++;
            }
            else if (firstVector[i] > secondVector[i] && firstVector[i] < secondVector[i] * 2)
            {
                count++;
            }
            else if (secondVector[i] > firstVector[i] && secondVector[i] < firstVector[i] * 2)
            {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}