#pragma once

//#include <string>
#include <iostream>

namespace armat
{
	int InputInteger(std::string variableName = "")
	{
		int number;

		if (variableName == "")
			std::cout << "Input integer: ";
		else
			std::cout << "Input " << variableName << ": ";

		std::cin >> number;

		return number;
	}

	double InputDouble(std::string variableName = "")
	{
		double number;

		if (variableName == "")
			std::cout << "Input integer: ";
		else
			std::cout << "Input " << variableName << ": ";

		std::cin >> number;

		return number;
	}

	std::string InputString(std::string variableName = "")
	{
		std::string text;

		if (variableName == "")
			std::cout << "Input text: ";
		else
			std::cout << "Input " << variableName << ": ";

		std::cin >> text;

		return text;
	}

	int min(int a, int b)
	{
		if (a < b)
			return a;

		return b;
	}
}

namespace charmat
{
	int min(int a, int b)
	{
		if (a > b)
			return a;

		return b;
	}
}
