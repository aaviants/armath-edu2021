#include <iostream>

using namespace std;

int main()
{
	const int array_size = 10;
	int array_of_integers[array_size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pointer_to_int_array = array_of_integers;

	pointer_to_int_array += 4;

	int memory_size_for_double = sizeof(double);		// 8
	int memory_size_for_int = sizeof(int);				// 4
	int memory_size_for_char = sizeof(char);			// 1

	int memory_size_for_double_ptr = sizeof(double*);	//
	int memory_size_for_int_ptr = sizeof(int*);			//
	int memory_size_for_char_ptr = sizeof(char*);		// 32 bit (4 byte) / 64 bit (8 byte)

	cout << "size of double is " << memory_size_for_double << endl;
	cout << "size of int is " << memory_size_for_int << endl;
	cout << "size of char is " << memory_size_for_char << endl;

	cout << "size of double* is " << memory_size_for_double_ptr << endl;
	cout << "size of int* is " << memory_size_for_int_ptr << endl;
	cout << "size of char* is " << memory_size_for_char_ptr << endl;

	int variable = 5;
	bool this_is_a_boolean = true;
	int* int_pointer = &variable;
	void* void_pointer = &variable;

	bool* array_of_bools = new bool[variable];
	double* array_of_doubles = new double[variable * 10];

	for (int i = 0; i < variable; i++)
	{
		array_of_doubles[i] = i * i;
		array_of_bools[i] = true;
	}


	bool* bool_ptr = &this_is_a_boolean;
	bool_ptr[0] = false;
	*bool_ptr = false;


	bool_ptr = array_of_bools;
	for (int i = 0; i < variable; i++)
	{
		//cout << array_of_doubles[i] << endl;
		cout << bool_ptr[i] << endl;
	}

	for (int i = 0; i < variable; i++)
	{
		array_of_doubles[i] = i * i;
		array_of_bools[i] = true;
	}


	delete[] array_of_bools;
	delete[] array_of_doubles;

	if (this_is_a_boolean)
	{
		int x = 4;
		char word[] = { 'w', 'o', 'r', 'd', '\0' };

		word[3] = 'a';
		x = 5;
	}

	// memory allocation
	int* pointer_to_int_memory;
	pointer_to_int_memory = new int[variable];

	// write into the dynamic memory
	pointer_to_int_memory[2] = 4;

	// memory deallocation / free
	delete[] pointer_to_int_memory;

	int bigArraySize = 1024 * 1024 * 100;

	char* arrayOfBytes1 = nullptr;
	char* arrayOfBytes2 = nullptr;
	char* arrayOfBytes3 = nullptr;
	char* arrayOfBytes4 = nullptr;
	char* arrayOfBytes5 = nullptr;

	while (true)
	{
		arrayOfBytes1 = new char[bigArraySize];
		arrayOfBytes2 = new char[bigArraySize];
		arrayOfBytes3 = new char[bigArraySize];
		arrayOfBytes4 = new char[bigArraySize];
		arrayOfBytes5 = new char[bigArraySize];
	}

	delete[] arrayOfBytes5;
	delete[] arrayOfBytes4;
	delete[] arrayOfBytes3;
	delete[] arrayOfBytes2;
	delete[] arrayOfBytes1;

	return 0;
}
