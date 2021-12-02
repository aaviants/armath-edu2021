#include <iostream>




void loadFile(std::string filePath, char* fileData, int length)
{
	for (int i = 0; i < length; i ++)
		fileData[i] = i;
}


struct Point
{
	double x;
	double y;
};


union Number
{
	// struct memory
	// __ ____ ________ ____ _______

	//union memory
	// __
	// ____
	// ________
	// ____
	// ________

	short short_num;
	int int_number;
	long long long_number;
	float float_number;
	double double_number;
};

//struct Vector
//{
//	double x;
//	double y;
//};

using Vector = Point;

using byte = char;
using byte_ptr = char*;

using const_int = const int;

using const_int_ptr = const int*;


using int_ref = int&;


using text = const char*;
//typedef const char* text;


enum DataDypes
{
	Invalid,

	Short,
	Int,
	Long,
	Float,
	Double
};

enum Colors
{
	red,
	green,
	blue,
	yellow,
	black,
	white
};


struct Num
{
	Number value;
	DataDypes dataType;
};

Number add(Number a, Number b, DataDypes type)
{
	Number result = { };

	switch (type)
	{
	case Short:
		result.short_num = a.short_num + b.short_num;
		break;
	case Int:
		result.int_number = a.int_number + b.int_number;
		break;
	case Long:
		result.long_number = a.long_number + b.long_number;
		break;
	case Float:
		result.float_number = a.float_number + b.float_number;
		break;
	case Double:
		result.double_number = a.double_number + b.double_number;
		break;
	}

	return result;
}

Num add(Num a, Num b)
{
	Num result = {};

	if (a.dataType != b.dataType)
	{
		result.value.long_number = 0;
		result.dataType = Invalid;
		return result;
	}

	switch (a.dataType)
	{
	case Short:
		result.value.short_num = a.value.short_num + b.value.short_num;
		break;
	case Int:
		result.value.int_number = a.value.int_number + b.value.int_number;
		break;
	case Long:
		result.value.long_number = a.value.long_number + b.value.long_number;
		break;
	case Float:
		result.value.float_number = a.value.float_number + b.value.float_number;
		break;
	case Double:
		result.value.double_number = a.value.double_number + b.value.double_number;
		break;
	default:
		result.value.long_number = 0;
		result.dataType = Invalid;
		break;
	}

	return result;
}

int main()
{
	char letter = 'a';

	byte_ptr fileContents = new byte[100];
	loadFile("c:\\file.exe", fileContents, 100);


	const_int a = 14;
	double array_of_doubles[a];

	int b = 15;
	const_int_ptr ptr = &b;

	int_ref c = b;

	//(*ptr) = 3;

	char some_text[] = "my name is Ara";
	some_text[3] = 'N';

	text some_text_2 = "my name is Ara";


	Vector v1 = { 1, 2 };
	Point p1 = { 2, 3 };


	p1 = v1;


	Number num;

	num.int_number = 5;
	num.short_num = 1;
	num.double_number = 1.5;
	num.float_number = 3.3;
	num.long_number = 5;



	Number x, y;

	x.long_number = 28784687853;
	y.long_number = 28784687854;

	Number result = add(x, y, Long);
	std::cout << "result = " << result.long_number << std::endl;


	Num m, n;
	m.value.float_number = 1.3f;
	m.dataType = Float;
	n.value.float_number = 2.1f;
	n.dataType = Float;
	Num k = add(m, n);
	std::cout << "result = " << k.value.float_number << std::endl;

	return 0;
}
