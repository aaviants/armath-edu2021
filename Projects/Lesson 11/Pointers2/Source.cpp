#include <iostream>


void f()
{
	int i = 92343587;
	int j = 92343587;
	int k = i * j;		// integer overflow

	double numbers[100];
	for (int i = 0; i < 100; i++)
		numbers[i] = i * i;


	double* pointer = numbers;
	for (int i = 0; i < 100; i++)
		pointer[i] = i * i * i;

	for (int i = 0; i < 100; i++)
	{
		*pointer = i * i * i + 1646511654.29874924;
		pointer++;
	}

	double one_number = 1;
	pointer = &one_number;
}

int main()
{
	int number;
	number = 10;

	int number2 = 15;

	f();

	int* pointer_to_number = &number;
	pointer_to_number = nullptr;
	pointer_to_number = &number2;

	int** pointer_to_pointer_to_number = &pointer_to_number;


	double real_number = 92873492.239874;
	double* pointer_to_real_number = &real_number;

	bool true_or_false = true;
	bool* pointer_to_bool = &true_or_false;


	// 32 bit (4 byte) program has memory
	// 0 - 2^32
	// Max capacity 4 GB

	// 64 bit (8 byte)
	// 0 - 2^64
	// max capacity = 16384 PB
	int integer = 92343587;
	long long long_integer = 923435873458738735;

	std::string text = "this is some text iufh ihfdi gds kjd kjkhdkjs kjgds k ";
	std::string* pointer_to_text = &text;


	char letter = 'a';
	char sentence[] = "some long sentence";

	char* pointer_to_sentence = sentence;
	int length;


	int n = 1000000000;
	//char var_array[n];

	pointer_to_sentence = new char[n];

 	return 0;
}
