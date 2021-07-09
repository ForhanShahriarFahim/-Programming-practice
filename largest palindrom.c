// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if n is palindrome
bool isPalindrome(int n)
{
	// Find the appropriate divisor
	// to extract the leading digit
	int divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;

	while (n != 0) {
		int leading = n / divisor;
		int trailing = n % 10;

		// If first and last digits are
		// not same then return false
		if (leading != trailing)
			return false;

		// Removing the leading and trailing
		// digits from the number
		n = (n % divisor) / 10;

		// Reducing divisor by a factor
		// of 2 as 2 digits are dropped
		divisor = divisor / 100;
	}
	return true;
}

// Function to find the largest palindromic number
int largestPalindrome(int A[], int n)
{

	// Sort the array
	sort(A, A + n);

	for (int i = n - 1; i >= 0; --i) {

		// If number is palindrome
		if (isPalindrome(A[i]))
			return A[i];
	}

	// If no palindromic number found
	return -1;
}

// Driver program
int main()
{
	int A[] = { 1, 232, 54545, 999991 };
	int n = sizeof(A) / sizeof(A[0]);

	// print required answer
	cout << largestPalindrome(A, n);

	return 0;
}
