#include <iostream>

using namespace std;

int main()
{
	// sum of numbers 1-5 
	int i = 1;
	int sum = 0;

	while (i <= 5)
	{
		sum += i;			// sum = sum + i

		i++;				// i = i + 1
	}
	cout << sum << endl;

	// product of numbers 1-5 
	int prod = 1;
	for (int k = 1; k <= 5; k++)
	{
		prod *= k;
	}
	cout << prod << endl;

	// do-while
	do
	{
		cout << "ABC" << endl;
	} while (false);

	// break and continue
	// sum of numbers in 1-100 range that do not divide to 7 and 3
	int result = 0;
	for (int n = 100; n >= 1; n -= 2)
	{
		int r = n % 7;

		//if (r != 0)
		//	result += n;

		if (r == 0)
			continue;

		if (n % 3 != 0)
			continue;
		
		result += n;
		cout << n << ",";

		while (false)
		{
		}
	}
	cout << endl<< result << endl;


	result = 0;
	int n = 1;

	do
	{
		result += n;
		cout << n << ",";
		n++;

		if (n > 7)
			break;
	} while (true);
	cout << endl << result << endl;



	// 1! + 2! + 3! + 5! + ... + n!    for numbers not dividing to 4
	// i! = 1 * 2 * 3 * ... * i

	sum = 0;
	n = 5;
	cout << endl << endl;
	for (int i = n; i >= 1; i--)
	{
		if (i % 4 == 0)
			continue;

		prod = 1;
		for (int j = 2; j <= i; j++)
			prod *= j;

		sum += prod;
	}
	cout << sum << endl << endl;



	string str;
	do {
		cout << "Enter text: ";
		cin >> str;
		cout << "You entered: " << str << '\n';
	} while (str != "goodbye");
}
