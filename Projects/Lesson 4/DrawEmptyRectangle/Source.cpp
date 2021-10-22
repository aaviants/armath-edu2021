#include <iostream>

int main()
{
	/*
	*
	**
	* *
	*  *
	*   *
	*    *
	*******
	*/

	int n = 0;

	std::cout << "Input size of the triangle: ";
	std::cin >> n;

	int row = 1;

	while (row < n)
	{
		// print the first *
		std::cout << "*";

		// print the empty space
		int spaces = 0;
		spaces = row - 2;
		while (spaces > 0)
		{
			std::cout << " ";
			spaces--;
		}

		// print the last *
		if (row > 1)
			std::cout << "*";

		std::cout << std::endl;

		row++;
	}

	// print the last line
	int column = 0;
	while (column < n)
	{
		std::cout << "*";
		column++;
	}
	std::cout << std::endl;
}
