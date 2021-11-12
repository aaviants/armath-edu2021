#include <iostream>

using namespace std;

void f(int i, double d)
{
	i = (int)d;

	d = i;
}

void increase_ref(int& refValriable)
{
	//refValriable++;
	//refValriable += 2;

	refValriable *= 3;
}

void increase_ptr(int* ptrVariable)
{
	//*ptrVariable++;
	//*ptrVariable += 2;

	*ptrVariable *= 3;
}


int add(int base_number, int increment)
{
	return base_number + increment;
}

int add(int base_number, const int* increment)
{
	//*increment += 2;
	if (increment == nullptr)
		return base_number;

	return base_number + *increment;
}


int main()
{
	short s = 0;
	int x = 1;
	double real_number = 1.5;

	short* address_to_short = &s;
	int* address = &x;
	double* dAddress = &real_number;

	cout << address_to_short << endl;
	cout << address << endl;
	cout << dAddress << endl;

	int numeric_address = (int)address_to_short;
	address_to_short = (short*)15;

	short* address_to_short_2;

	// reference variable cannot point to another one
	int y = 2;
	int& z = x;
	int k = y;

	z = 3;
	z = y;
	z = 4;


	s = x;
	f(x, real_number);


	increase_ref(x);
	increase_ptr(&x);

	y = add(10, &x);
	y = add(10, nullptr);

	int* pointer = &x;
	pointer = &y;
	pointer = &z;


	pointer = &x;
	*pointer = 5;

	pointer = &y;
	*pointer = 5;

	int another_value = *pointer;

	// iteration by array elements
	int array_of_numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
	{
		pointer = &array_of_numbers[i];

		*pointer *= 3;
		*pointer += 5;
	}

	double* pointer_to_double = nullptr;
	if (pointer_to_double != nullptr)
		*pointer_to_double = 14.457;

	pointer_to_double = &real_number;




	// pointers and const
	int a = 0;
	a = 1;
	a = 2;

	const int b = 0;
	//b = 1;			// const variable cannot be changed


	int* p_int = nullptr;
	p_int = &a;
	p_int = &x;

	*p_int = 92387;

	const int* pc_int = nullptr;
	pc_int = &a;
	pc_int = &x;

	//p_int = &b;		// this is not valid
	*p_int = 12;


	pc_int = &b;		// this is OK;
	//*pc_int = 17;

	y = *pc_int;
	y = b;


	int* const p_int_2 = &a;
	//p_int_2 = &b;
	*p_int_2 = 13;


	const int* const p_int_3 = &a;
	//p_int_3 = &b;
	//*p_int_3 = 433;
}
