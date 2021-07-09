
#include <iostream>
#include<string>
using namespace std;
int frequency_Substr(string str,int *arr)
{
    int count=0;
    for (int i = 0; i <str.size()-1; i++)
    {
        int m = 0;
        int n = i;
        for (int j = 0; j < substr.size(); j++)
        {
            if (str[n] == substr[j])
            {
                m++;
            }
            n++;
        }
        if (m == substr.size())
        {
            count++;
        }

    }
    cout << "total number of time substring occur in string is " << count << endl;
    return count;
}
int main()
{
    string x, y;

    cin >> x;
    arr[] = {'0','1','01','10','?','0?','?1'};
    frequency_Substr(x, arr);
    return 0;
}
