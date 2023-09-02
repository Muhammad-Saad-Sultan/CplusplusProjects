/*
#include <iostream>
using namespace std;
int main()
{
	int num;
	int f = 0;
	int f1 = 0;
	int f2 = 1;

	cout << "Enter a number to print fibonacci series upto: " << endl;
	cin >> num;

	cout << "Fibonacci Series: ";

	for (int i = 0; i <= num; i++)
	{
		
		cout << f << ", ";

		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}

	// while(f <= num)
	// {
	// 	cout << f << ", ";
	// 	f = f1 + f2;
	// 	f1 = f2;
	// 	f2 = f;
	// }

return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
	int num;
	int f = 0;
	int f1 = 0;
	int f2 = 1;
	char i = 0;
	char j = 2;

	cout << "Enter a number to print fibonacci series upto: ";
	cin >> num;

	cout << "Fibonacci Series: ";

	for (int i = 0; i <= num; i++)
	{
		
		cout << f << ", ";

		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}

	cout << endl;

	cout << "Sum of even index of fibonacci series: " << endl;
	
	for (int i = 0; i <= num; i++)
	{
		f[j] = f[j-1] + f[j-2];
	}

return 0;
}
*/

// C++ Program to find sum of
// even-indiced Fibonacci numbers
#include <bits/stdc++.h>
using namespace std;

// Computes value of first
// fibonacci numbers and
// stores the even-indexed sum
int calculateEvenSum(int n)
{
	if (n <= 0)
		return 0;

	int fibo[2 * n + 1];
	fibo[0] = 0, fibo[1] = 1;

	// Initialize result
	int sum = 0;

	// Add remaining terms
	for (int i = 2; i <= 2 * n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2]; //++

		// For even indices
		if (i % 2 == 0)
			sum += fibo[i]; //sum=sum+fibo[2]
	}

	// Return the alternating sum
	return sum;
}

// Driver code
int main()
{

	// Get n
	int num;

	cout << "Enter number to print fibonacci series upto: ";
	cin >> num;

	// Find the even-indiced sum
	cout << "Even indexed Fibonacci Sum upto " <<
			num << " terms: " << calculateEvenSum(num) <<
			endl;

	return 0;
}

	0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 234, 