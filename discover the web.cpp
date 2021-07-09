#include <bits/stdc++.h>
using namespace std;



int main()
{

    long long int t;
    cin >> t;

    for (long long int i = 1; i <= t; i++)
    {
        stack<string> sback,sforward;
        cout << "Case " << i << ":" << endl;
        sback.push("http://www.lightoj.com/");
        while (1)
        {

            string s,link;
            cin >> s;
            if (s == "VISIT")
            {
                cin >> link;
                sback.push(link);
                cout << sback.top() << endl;
                if (!sforward.empty())
                {
                    sforward.pop();
                }
            }
            else if (s == "BACK")
            {
                if (sback.size() <= 1)
                {
                    cout << "Ignored" << endl;
                }
                else
                {
                    sforward.push(sback.top());
                    sback.pop();
                    cout << sback.top() << endl;
                }
            }
            else if (s == "FORWARD")
            {
                if (sforward.size() == 0)
                {
                    cout << "Ignored" << endl;
                }
                else
                {
                    sback.push(sforward.top());
                    sforward.pop();
                    cout << sback.top() << endl;
                }
            }
            else
            {
                break;
            }
        }
    }
}
