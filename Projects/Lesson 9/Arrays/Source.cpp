#include <iostream>


using namespace std;


void inputNumbers(int arrayOfNumbers[], int count);
void printNumbers(int arrayOfNumbers[], int count);
int sumOfNumbers(int arrayOfNumbers[], int count);

int main()
{
	// input an array
	// calculate the sum
	// calculate the sum of positive numbers
	// print both sums

	const int N = 5;
	int arrayOfNumbers[N];

	inputNumbers(arrayOfNumbers, N);
	int result = sumOfNumbers(arrayOfNumbers, N);
	printNumbers(arrayOfNumbers, N);
	cout << "sum is " << result << endl;



	// 2, 4, 7, 1, 9, 5, -2, 0, 14
	// 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't'
	// true, false, false, false, true

	int i;
	int intArray[10];

	i = 4;
	intArray[0] = 4;
	intArray[1] = 5;
	intArray[2] = 6;
	intArray[4] = -1;
	intArray[9] = 15;
	printNumbers(intArray, 10);

	i = intArray[9];
	cout << intArray[0] << endl << intArray[1] << endl << i << endl;

	short j = 3;
	short shortArray[10];
	shortArray[0] = 5;
	shortArray[2] = 3;
	shortArray[9] = 1;


	//int i1;
	//int i2;
	//...
	//int i10;

	double coordinates[2];

	// 5 * 8 byte = 40 byte
	double arrNumbers[5];
	arrNumbers[0] = 12345.8746;
	arrNumbers[4] = 12345000.8746;



	char text[7];
	text[0] = 'd';
	text[1] = 'o';
	text[2] = 'c';
	text[3] = ' ';
	text[4] = 'a';
	text[5] = 'b';
	text[6] = 'c';

	char letter = text[5];

	for (int element = 6; element >= 0; element--)
	{
		if (text[element] == ' ')
			cout << endl;
		else
			cout << text[element];
	}
	cout << endl;


	// initializing array 
	cout << "printing array 2" << endl;
	int intArray_2[20] = { 1, 2, 3 };
	for (int element = 0; element < 20; element++)
	{
		cout << intArray_2[element]<<endl;
	}

	cout << "printing array 3" << endl;
	int intArray_3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int element = 0; element < 10; element++)
	{
		cout << intArray_3[element] << endl;
	}

	// 
	bool boolArray[4] = { true, false, true };
	if (boolArray[3])
		cout << "true" << endl;
	else
		cout << "false" << endl;

	// initializing char array
	char letters[] = { 'a', 'b', 'c', '\0' };
	char letters_2[] = "This is some text";
	int index = 0;
	while (letters_2[index] != '\0')
	{
		if (letters_2[index] == ' ')
			cout << endl;
		else
			cout << letters_2[index];

		index++;
	}
	cout << endl;


	const int n = 10;
	double numbers[n];

	for (int i = 0; i < n; i++)
	{
		cout << "enter number " << i << ": ";
		cin >> numbers[i];
	}


	// multi dim arrays
	int array_of_integers[3];

	const int rows = 3;
	const int columns = 2;
	int matrix_of_integers[rows][columns];



	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << "enter value[" << i << "," << j << "]: ";
			cin >> matrix_of_integers[i][j];
		}
	}



	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < columns; j++)
	//	{
	//		matrix_of_integers[i][j] = i * j;
	//	}
	//}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << matrix_of_integers[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}


void inputNumbers(int arrayOfNumbers[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "enter number " << i << ": ";
		cin >> arrayOfNumbers[i];
	}

	count = 16;
}

void printNumbers(int arrayOfNumbers[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "number " << i << " = " << arrayOfNumbers[i] << endl;
	}
}

int sumOfNumbers(int arrayOfNumbers[], int count)
{
	int sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += arrayOfNumbers[i];
	}

	return sum;
}
