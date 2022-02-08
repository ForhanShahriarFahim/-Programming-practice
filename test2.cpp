#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfOrder;
    cin >> numberOfOrder;
    if (numberOfOrder == 1)
        cout << "1";

    else
    {

        int s = 0;
        int start[numberOfOrder], end[numberOfOrder];
        for (int i = 0; i < numberOfOrder; i++)
        {
            cin >> start[i] >> end[i];
            if (start[i] == end[i])
            {
                s++;
            }
        }
        if (s == numberOfOrder)
        {
            cout << "1";
            return 0;
        }

        for (int i = 0; i < numberOfOrder - 1; i++)
        {
            for (int j = 0; j < numberOfOrder - i; j++)
            {
                if (end[j] > end[j + 1])
                {
                    swap(start[j], start[j + 1]);
                    swap(end[j], end[j + 1]);
                }
            }
        }

        int f = 0, l = 1, count = 0;
        while (l < numberOfOrder)
        {
            if (start[l] <= end[f])
            {
                count++;

                l++;
            }
            else
            {
                f = l;
                l++;
            }
        }
        // cout<<count;
        //for the output
        cout << numberOfOrder - count;
    }
    return 0;
}