#include <iostream>

int main()
{
	int age = 30;
	bool isChild = age < 18;		// false or true
	int a = 0;

	std::cout << "Input your age: ";
	std::cin >> age;

	a++;
	std::cout << a << std::endl;
	a++;
	std::cout << a << std::endl;

	//if (isChild)
	if (age < 18)
	{
		a++;
		std::cout << a << std::endl;
		a++;
		std::cout << a << std::endl;

		std::cout << "You are a child" << std::endl;
	}
	else
	{
		a--;
		std::cout << a << std::endl;
		a--;
		std::cout << a << std::endl;

		std::cout << "You are adult" << std::endl;
	}

	a++;
	std::cout << a << std::endl;
	a++;
	std::cout << a << std::endl;
}
