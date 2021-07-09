// C++ program to Count set
// bits in an integer
#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
            cout<<n<<endl;
            cout<<"count value 1: "<<count<<endl;
		count += n & 1;
    cout<<"count value : "<<count<<endl;
		n >>= 1;
		cout<<n<<endl;
	}
	return count;
}

/* Program to test function countSetBits */
int main()
{
	int i = 9;
	cout << countSetBits(i);
	return 0;
}

// This code is contributed
// by Akanksha Rai
