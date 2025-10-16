#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int stringSize;
        cin >> stringSize;

        string inputString;
        cin >> inputString;

        if (stringSize == 1)
        {
            cout << "Ramos\n";
            continue;
        }

        int countZlatan = -1;
        int countRamos = 0;

        bool flag = false;

        for (int i = 1; i < stringSize; i++)
        {
            if (inputString[i] != inputString[i - 1] && flag == false)
            {
                if (countZlatan == -1)
                {
                    countZlatan = countZlatan + 2;
                    if (i + 1 < stringSize)
                    {
                        inputString[i + 1] = inputString[i];
                    }
                    flag = true;
                }
                else
                {
                    countZlatan++;
                    if (i + 1 < stringSize)
                    {
                        inputString[i + 1] = inputString[i];
                    }
                    flag = true;
                }
            }
            else if (inputString[i] != inputString[i - 1] && flag == true)
            {
                countRamos++;
                if (i + 1 < stringSize)
                {
                    inputString[i + 1] = inputString[i];
                }
                flag = false;
            }
        }

        if (countZlatan > countRamos)
        {
            cout << "Zlatan\n";
        }
        else
        {
            cout << "Ramos\n";
        }
    }

    return 0;
}