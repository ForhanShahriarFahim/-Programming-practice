#include <iostream>
#include <bitset>

int main() {
    string x;

    std::cin>>x;

    std::bitset<8> bin_x(x);
    std::cout << bin_x;

    return 0;
}
