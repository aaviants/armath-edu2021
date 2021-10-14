#include <iostream>

int main()
{
	const double pi = 3.14;


	int a = 1;
	int b = 2;

	a = 2;
	a = b;

	//a = pi;

	double real_number = b;

	const std::string my_name = "Ara";
	// my_name = "Samuel";

	double number = pi;


	int c = a = b = 5;
	int d = 3;

	int sum = a + b;
	int sum2 = a + (b + c);

	int result1 = (a - b) - c;		// -5
	int result2 = a - (b - c);		// 5
	int result3 = a - b - c;


	int mix_result_1 = a + b - c + d;	// 8
	int mix_result_2 = a * b / c * d;	// 15
	int mix_result_3 = a + b * c - d;	// 27

	int a2_b2 = a * a + b * b;
	int _2a_2b = (a + a) * (b + b);

	std::cout << mix_result_1 << std::endl << mix_result_2 << std::endl << mix_result_3 << std::endl;

	int int_div = a / b;

	double d1 = 5;
	double d2 = 10;

	double double_div = d1 / d2;


	// addition operator for text
	std::string text1 = "Some text";
	std::string text2 = "Another text";
	std::string text_sum = text1 + text2;
	std::cout << text_sum << std::endl;

	text1 = "1";
	text2 = "1";
	text_sum = text1 + text2;
	std::cout << text_sum << std::endl;

	//std::string text_mul = text1 * text2;


	// special operators for numbers
	a = 10;
	std::cout << a << std::endl;
	a = a + 1;
	std::cout << a << std::endl;
	a = a * 5;
	std::cout << a << std::endl;

	a += 1;		// a = a + 1
	std::cout << a << std::endl;
	a -= 1;		// a = a - 1
	std::cout << a << std::endl;
	a *= 15;	// a = a * 15
	std::cout << a << std::endl;

	a++;		// a = a + 1
	++a;		// a = a + 1
	std::cout << a << std::endl;
	a--;		// a = a - 1
	std::cout << a << std::endl;

	text_sum += "_abc";		// text_sum = text_sum + "_abc"
	std::cout << text_sum << std::endl;

	// a++ vs ++a
	a = 10;
	b = a + 1;

	std::cout << "--------" << std::endl;

	a = 10;
	b = a++;		// 1. remember a, 2. a=a+1, 3. return the memory
	std::cout << b << std::endl;
	std::cout << a << std::endl;

	a = 10;
	b = ++a;		// 1. a=a+1, 2. return a
	std::cout << b << std::endl;
	std::cout << a << std::endl;

	a = 10;
	b = a--;		// 1. remember a, 2. a=a-1, 3. return the memory
	std::cout << b << std::endl;
	std::cout << a << std::endl;

	a = 10;
	b = --a;		// 1. a=a-1, 2. return a
	std::cout << b << std::endl;
	std::cout << a << std::endl;

	a = 1;
					// 1		3		
	int new_number = (a++) + (++a) + (b++) + (++b);

	// mod operator
	int m = 30;
	int n = 7;
	int m_div_n = m / n;	// 4
	int m_mod_n = m % n;	// 2

	std::cout << "--------" << std::endl;
	std::cout << m_div_n << std::endl;
	std::cout << m_mod_n << std::endl;

	double dm = 30;
	double dn = 7;

	double dm_div_dn = dm / dn;
	//double dm_mod_dn = dm % dn;
	std::cout << dm_div_dn << std::endl;

	// after this line a = 1
	int new_var = (a = 1);

	const int z = 2;

	int b1 = (z == 1);		// 0
	int b2 = (z == 2);		// 1
	int b3 = (z == -5);		// 0

	std::cout << "b1 = " << b1 << std::endl;
	std::cout << "b2 = " << b2 << std::endl;
	std::cout << "b3 = " << b3 << std::endl;

	bool boolean_variable_false = false;	// 0
	bool boolean_variable_true = true;		// 1

	bool test = z == 1;		// false

	bool b4 = (z != 1);		// 1 (true)
	bool b5 = (z != 2);		// 0 (false)
	bool b6 = (z != -5);	// 1 (true)

	std::cout << "b4 = " << b4 << std::endl;
	std::cout << "b5 = " << b5 << std::endl;
	std::cout << "b6 = " << b6 << std::endl;

	bool b7 = (z > 3);		// false
	std::cout << "b7 = " << b7 << std::endl;

	bool b8 = z <= 6;		// true
	std::cout << "b8 = " << b8 << std::endl;

	b8 = a * 3 < b * 4;

	// logical operators
	bool b9 = !b8;				// true -> false and false -> true
	bool b10 = b1 || b2;		// || -> or
	bool b11 = b1 && b2;		// || -> and
}
