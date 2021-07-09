// STRING SET EXAMPLE
// CPP program to illustrate
// Implementation of begin() function
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	// declaration of set container
	set<string> my{"This", "is", "Geeksforgeeks"};

	// using begin() to print set
	for (auto it=my.begin(); it != my.end(); ++it)
		cout << ' ' << *it;
	return 0;
}
