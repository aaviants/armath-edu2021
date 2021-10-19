#include <iostream>

int main()
{
	int langauge = 0;
	bool isInvalid = false;

	// do-while loop
	do
	{
		isInvalid = false;

		std::cout << "0 - Contact Operator" << std::endl;
		std::cout << "1 - Armenian" << std::endl;
		std::cout << "2 - Russian" << std::endl;
		std::cout << "3 - English" << std::endl;
		std::cout << std::endl;

		std::cout << "Input your language choice: ";
		std::cin >> langauge;

		if (langauge == 0)
		{
			std::cout << "You chose to talk with the operator" << std::endl;
			std::cout << "All operators are busy" << std::endl;
			std::cout << "Try again later" << std::endl;
		}
		else if (langauge == 1)
			std::cout << "You chose Armenian language" << std::endl;
		else if (langauge == 2)
			std::cout << "You chose Russian language" << std::endl;
		else if (langauge == 3)
			std::cout << "You chose English language" << std::endl;
		else
		{
			std::cout << "Your choice is invalid" << std::endl;
			isInvalid = true;
		}
	} while (isInvalid);

	// while

	// calculate sum of 1->10 integers
	// 1+2+3+4+5+6+7+8+9+10

	int sum = 0;
	int counter = 1;
	// 0
	// 0 + 1 = 1
	// (0+1) + 2 = 3
	// (0+1+2) + 3 = 6
	// (0+1+2+3) + 4 = 10

	// (0+1+2+3+...+9) + 10 = 55

	sum = sum + counter;	// sum = 1
	counter++;				// counter = 2
	sum = sum + counter;	// sum = 3
	counter++;				// counter = 3
	sum = sum + counter;	// sum = 6
	counter++;				// counter = 4
	sum = sum + counter;
	counter++;
	sum = sum + counter;
	counter++;
	sum = sum + counter;
	counter++;
	sum = sum + counter;
	counter++;
	sum = sum + counter;
	counter++;
	sum = sum + counter;
	counter++;
	sum = sum + counter;
	counter++;
	std::cout << "sum of integers in [0,10] range is " << sum << std::endl;

	sum = 0;
	counter = 1;
	while (counter <= 10)
	{
		sum += counter;
		counter++;
	}
	std::cout << "sum of integers in [0,10] range is " << sum << std::endl;


	sum = 0;
	counter = 1;

	//counter = 25;
	do
	{
		sum += counter;
		counter++;
	} while (counter <= 10);
	std::cout << "sum of integers in [0,10] range is " << sum << std::endl;
}
