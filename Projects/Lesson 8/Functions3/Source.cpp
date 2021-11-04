#include <iostream>



void print(int i)
{
	std::cout << "value of i is " << i << std::endl;

	i++;

	std::cout << "value of i is " << i << std::endl;
}

void print_and_change(int& i)
{
	std::cout << "value of i is " << i << std::endl;

	i++;

	std::cout << "value of i is " << i << std::endl;

	//i = 0;
}


int InputNumber(std::string variableName)
{
	int number;

	std::cout << "Input " << variableName << ": ";
	std::cin >> number;

	return number;
}

//void InputTriangle(int& sideAB, int& sideBC, int& sideCA)
//{
//	std::cout << "Input side AB: ";
//	std::cin >> sideAB;
//
//	std::cout << "Input side BC: ";
//	std::cin >> sideBC;
//
//	std::cout << "Input side CA: ";
//	std::cin >> sideCA;
//}

void InputTriangle(int& sideAB, int& sideBC, int& sideCA)
{
	sideAB = InputNumber("AB");
	sideBC = InputNumber("BC");
	sideCA = InputNumber("CA");
}


// never do this
//int f()
//{
//	int a = f();
//	int b = f();
//
//	return a + b;
//}

// 1 + 2 + 3 + 4 + 5;

// 5 + (1 + 2 + 3 + 4)
// 5 + (4 + (1 + 2 + 3))

int recursive_sum(int max)
{
	if (max <= 0)
		return 0;

	return max + recursive_sum(max - 1);
}


int main()
{
	bool bValue = true;			// 1 bit
	char cValue = 'a';			// 8 bit (1 byte)
	short sValue = -17;			// 16 bit (2 byte)
	int iValue = 5;				// 32 bit (4 byte)
	float fValue = 1.5;			// 32 bit (4 byte)
	double dValue = 1.38746284;	// 64 bit (8 byte)

	print(iValue);
	print(iValue);
	print(iValue);

	print_and_change(iValue);
	print_and_change(iValue);
	print_and_change(iValue);


	iValue += 3;

	int iValue2 = iValue;
	iValue2++;

	int& iValue3 = iValue;
	iValue3++;


	float& f2 = fValue;
	f2++;
	fValue++;
	f2 += 5;


	int i3 = 5;

	//int& i4;		// error
	//int& i6 = 7;	// error


	int i5;
	//std::cin >> i5;

	int address_bValue = (int)&bValue;
	int address_cValue = (int)&cValue;
	int address_sValue = (int)&sValue;
	int address_iValue = (int)&iValue;
	int address_fValue = (int)&fValue;
	int address_dValue = (int)&dValue;
	int address_iValue2 = (int)&iValue2;



	//f();

	int sum = 0;
	for (int i = 1; i <= 5; i++)
		sum += i;
	std::cout << sum;

	recursive_sum(-4);

	std::cout << recursive_sum(5);

	// 
	int side1, side2, side3;

	//side1 = InputNumber("side1");
	//side2 = InputNumber("side2");
	//side3 = InputNumber("side3");


	//int perimeter1 = side1 + side2 + side3;
	//std::cout << "perimeter = " << perimeter1 << std::endl;


	InputTriangle(side1, side2, side3);

	int perimeter2 = side1 + side2 + side3;
	std::cout << "perimeter = " << perimeter2 << std::endl;


	return 0;
}
