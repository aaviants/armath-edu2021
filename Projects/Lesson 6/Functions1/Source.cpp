#include <iostream>


// [return value] name ([argument type 1] [argument name 1], [argument type 2] [argument name 2], [argument type 2] [argument name 2], ...)

// 1! + 2! + 3! + 4! + ... + n!
int factorial(int number);
int average(int number1, int number2);
double average(double n1, double n2);
float average(float n1, float n2);
int average(int number1, int number2, int number3);
double function2(double a, int b, float c, short d, bool sum_or_subst);
void function_that_doesnt_retrun(int a, int b);
int inputValue(std::string variableName = "[unknown]");
double CalculateSomething();
int CalculateSum(int n1, int n2, int n3 = 0, int n4 = 0, int n5 = 0);

int CalculateProd(int n1, int n2, int n3 = 1, int n4 = 1, int n5 = 1)
{
	return n1 * n2 * n3 * n4 * n5;
}


int main()
{
	//double calculation = CalculateSomething();

	// sum 1 -> 10
	int n = inputValue();
	n = inputValue("N");
	if (n <= 0)
	{
		std::cout << "invalid value" << std::endl;
		return -1;
	}


	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int result = factorial(i);
		sum += result;
	}

	std::cout << "sum is " << sum << std::endl;

	// average of numbers
	int avg = average(3, 9);
	std::cout << "average is " << avg << std::endl;

	avg = average(3, 9, 14);
	std::cout << "average is " << avg << std::endl;

	std::cout << "average is " << average(1, 2) << std::endl;
	std::cout << "average is " << average(1.0, 2.0) << std::endl;


	// another use of factorial
	std::cout << "factorial of 5 is " << factorial(5) << std::endl;

	// 
	double func2Result = function2(15.5, 4, 3.1f, 7, false);
	std::cout << "running function 2" << func2Result << std::endl;

	// print average of 2 numbers
	function_that_doesnt_retrun(n, 5);
	//return -1;



	// calculate sum of the numbers
	sum = CalculateSum(1, 2, 3, 4, 5);
	std::cout << "sum is " << sum << std::endl;
	sum = CalculateSum(10, 15, 21, 45, -5);
	std::cout << "sum is " << sum << std::endl;
	sum = CalculateSum(10, 15, 21, 45);
	std::cout << "sum is " << sum << std::endl;
	sum = CalculateSum(10, 15, 21);
	std::cout << "sum is " << sum << std::endl;
	sum = CalculateSum(10, 15);
	std::cout << "sum is " << sum << std::endl;


	//
	int side1, side2, side3;

	std::cout << "Input side 1: ";
	std::cin >> side1;
	std::cout << "Input side 2: ";
	std::cin >> side2;
	std::cout << "Input side 3: ";
	std::cin >> side3;

	std::cout << "perimeter of triangle is " << side1 + side2 + side3 << std::endl;

	//
	int koxm1 = inputValue("side 1");
	int koxm2 = inputValue("side 2");
	int koxm3 = inputValue("side 3");

	std::cout << "perimeter of triangle is " << koxm1 + koxm2 + koxm3 << std::endl;
}

int factorial(int number)
{
	int prod = 1;

	for (int j = 2; j <= number; j++)
		prod *= j;

	return prod;
}


int average(int number1, int number2)
{
	int result = (number1 + number2) / 2;

	return result;
}

double average(double n1, double n2)
{
	double result = (n1 + n2) / 2;

	return result;
}

float average(float n1, float n2)
{
	float result = (n1 + n2) / 2;

	return result;
}


int average(int number1, int number2, int number3)
{
	int result = (number1 + number2 + number3) / 3;

	return result;
}

double function2(double a, int b, float c, short d, bool sum_or_subst)
{
	// (a + b + c + d) / 4
	// (a - b + c - d) / 4

	double result;

	if (sum_or_subst)
		result = (a + b + c + d) / 4;
	else
		result = (a - b + c - d) / 4;

	return result;
}

void function_that_doesnt_retrun(int a, int b)
{
	int avg = average(a, b);
	std::cout << avg << std::endl;
}

int inputValue(std::string variableName)
{
	int result;

	std::cout << "Input " << variableName << ": ";
	std::cin >> result;

	return result;
}

double CalculateSomething()
{
	int a;
	std::cin >> a;

	double d = a / 10.5;

	return sin(d);
}


int CalculateSum(int n1, int n2, int n3, int n4, int n5)
{
	return n1 + n2 + n3 + n4 + n5;
}
