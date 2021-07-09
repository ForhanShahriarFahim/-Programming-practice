#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
        long long int n, digits = 0; std::cin>>n;
        for(int i=1 ; i<=n; i++)
        {
            std::string temp = std::to_string(i);
            digits = digits + temp.std::size();
        }
        std:: cout<<digits<<std::endl;
}
