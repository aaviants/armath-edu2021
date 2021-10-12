// my first program in C++
#include <iostream>

int main()
{
	// Print Hello world
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello World!" << std::endl;

	// variable naming
	short name = 5;
	short name_tail = 5;
	short name_tail__ = 5;
	short __name_tail__ = 5;
	short name2 = 5;
	short name3 = 5;
	short name__3__tail = 5;
	//short 5name__3__tail = 5;		// variable name cannot start with a number

	// Person lifetime is [0-100]
	short age = 34;			// 2 byte for short
	//int age = 5;			// variables cannot have the same name

	int money = 10000000;	// this is money in my pocket

	// 1 byte = 8 bit = 2^8 = [0,256)
	// 2 byte = 16 bit = 2^16 = [0,65 ***)
	// 4 byte = 32 bit = 2^32 = [0,4 *** *** ***)

	short amount_of_money = 10000000;


	// integer numbers
	int n = 34;
	int k = 7;

	int sum = n + k;
	int sub = n - k;
	int mul = n * k;
	int div = n / k;

	std::cout << n << std::endl;
	std::cout << k << std::endl;

	std::cout << sum << std::endl;
	std::cout << sub << std::endl;
	std::cout << mul << std::endl;
	std::cout << div << std::endl;

	// real numbers
	float f1 = 34;		// 4 byte real number
	float f2 = 7;

	float floatDiv = f1 / f2;
	std::cout << floatDiv << std::endl;

	double d1 = 34;		// 8 byte real number
	double d2 = 7;

	double doubleDiv = f1 / f2;
	std::cout << doubleDiv << std::endl;

	// 
	int i1 = 34;
	int i2 = 7;

	float fdiv = i1 / i2;
	std::cout << "-------" << std::endl;
	std::cout << "fdiv = ";
	std::cout << fdiv << std::endl;


	std::cout << "-------" << std::endl;
	float uninitialized_float;

	uninitialized_float = 4.3f;
	std::cout << uninitialized_float << std::endl;

	// changing variable values
	int i;
	i = 43875;
	std::cout << i << std::endl;
	i = 1;
	std::cout << i << std::endl;
	i = 2;
	std::cout << i << std::endl;
	i = 3;
	std::cout << i << std::endl;
	i = n + k;

	// character types
	std::cout << "-------" << std::endl;
	char letter1 = 'a';
	char letter2 = 'b';
	char letter3 = 'c';
	char symbol1 = '!';
	char symbol2 = '@';
	char symbol3 = '#';
	char number1 = '1';
	char number2 = '2';
	char number3 = '3';
	//char word1 = 'ok';		// this is not a char

	std::cout << letter1 << std::endl;
	std::cout << symbol1 << std::endl;
	std::cout << number1 << std::endl;
	//std::cout << word1 << std::endl;

	// string types
	std::string text = "Some text";
	std::cout << text << std::endl;
}
