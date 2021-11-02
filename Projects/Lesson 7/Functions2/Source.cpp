#include <iostream>

#include "Input.h"

double pi = 3.14;
double global_variable;

const double PI = 3.1415;

using namespace std;
using namespace armat;
using namespace charmat;

void f(int variable)
{
	int result1 = std::min(-5, 7);
	int result2 = std::max(3, 1);

	int N = 15;
	N = N + variable;
	cout << N << endl;

	//double pi = 3.1415;
	std::cout << pi << std::endl;

	if (global_variable > 0)
		std::cout << global_variable << std::endl;

	pi += 1.5;
}

int main()
{
	int N = 5;
	int M = -4;

	N = armat::InputInteger();
	M = armat::InputInteger("M");

	int K = std::min(M, N);
	int I = armat::min(M, N);
	int J = charmat::min(M, N);

	std::string text = InputString();
	text = InputString("Text");

	N = N + 1;
	std::cout << N << std::endl;
	std::cout << M << std::endl;


	global_variable = 12;

	f(1);

	std::cout << N << std::endl;

	std::cout << pi << std::endl;

	pi += 1.5;

	//int N = 2;
	//N++;

	if (N > 2)
	{
		std::cout << N << std::endl;

		std::cout << pi << std::endl;

		int N = 2;
		std::cout << N << std::endl;
		std::cout << M << std::endl;


		while (M < 0)
		{
			std::cout << N << std::endl;


			int N = M * 5;
			std::cout << N << std::endl;
			M++;
		}
		N++;

		std::cout << N << std::endl;
	}

	std::cout << N << std::endl;

	f(N);

	return 0;
}
