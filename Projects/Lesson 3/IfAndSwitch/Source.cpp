#include <iostream>

int main()
{
	int langauge = 0;

	std::cout << "0 - Contact Operator"<<std::endl;
	std::cout << "1 - Armenian" << std::endl;
	std::cout << "2 - Russian" << std::endl;
	std::cout << "3 - English" << std::endl;
	std::cout << std::endl;

	std::cout << "Input your language choice: ";
	std::cin >> langauge;

	bool isValidSelection = false;

	// Version 1
	if (langauge == 0)
	{
		std::cout << "You chose to talk with the operator" << std::endl;
		std::cout << "All operators are busy" << std::endl;
		std::cout << "Try again later" << std::endl;

		isValidSelection = true;
	}

	if (langauge == 1)
	{
		std::cout << "You chose Armenian language" << std::endl;
		isValidSelection = true;
	}

	if (langauge == 2)
	{
		std::cout << "You chose Russian language" << std::endl;
		isValidSelection = true;
	}

	if (langauge == 3)
	{
		std::cout << "You chose English language" << std::endl;
		isValidSelection = true;
	}

	//if (langauge != 0 && langauge != 1 && langauge != 2 && langauge != 3)
	//if (langauge <= -1 || langauge >= 4)
	//if (langauge < 0 || langauge > 3)
	if (!isValidSelection)
		std::cout << "Your choice is invalid" << std::endl;

	// Version 2
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
		std::cout << "Your choice is invalid" << std::endl;

	// Version 3
	switch (langauge)
	{
	case 0:
		std::cout << "You chose to talk with the operator" << std::endl;
		std::cout << "All operators are busy" << std::endl;
		std::cout << "Try again later" << std::endl;
		break;
	case 1:
		std::cout << "You chose Armenian language" << std::endl;
		break;
	case 2:
		std::cout << "You chose Russian language" << std::endl;
		break;
	case 3:
		std::cout << "You chose English language" << std::endl;
		break;
	default:
		std::cout << "Your choice is invalid" << std::endl;
		break;
	}
}
