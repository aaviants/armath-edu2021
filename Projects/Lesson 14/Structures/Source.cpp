#include <iostream>

using namespace std;


void f1();
void f2();
void f3();
void f4();
void f5();
void f6();


int main()
{
	//cout << "---- Running f1 ----" << endl;
	//f1();

	//cout << "---- Running f2 ----" << endl;
	//f2();

	//cout << "---- Running f3 ----" << endl;
	//f3();

	//cout << "---- Running f4 ----" << endl;
	//f4();

	//cout << "---- Running f5 ----" << endl;
	//f5();

	cout << "---- Running f6 ----" << endl;
	f6();

	return 0;
}

void f1()
{
	// declare vectors
	float x1, y1;
	float x2, y2;

	// input vectors
	cout << "Input point 1 x: ";
	cin >> x1;
	cout << "Input point 1 y: ";
	cin >> y1;
	cout << "Input point 2 x: ";
	cin >> x2;
	cout << "Input point 2 y: ";
	cin >> y2;

	// sum of the vectors
	float x3 = x1 + x2;
	float y3 = y1 + y2;

	cout << "sum of vectors is (" << x3 << "," << y3 << ")" << endl;

	// product of the vectors
	float scalar_prod = x1 * x2 + y1 * y2;

	cout << "scalar product of vectors is " << scalar_prod << endl;
}



void vector_input_2(float& x, float& y, string vector_name)
{
	cout << "Input " << vector_name << " x: ";
	cin >> x;
	cout << "Input " << vector_name << " y: ";
	cin >> y;
}

void vector_output_2(float x, float y, string vector_name)
{
	cout << vector_name << " = (" << x << "," << y << ")" << endl;
}

void vector_sum_2(float a_x, float a_y, float b_x, float b_y, float& result_x, float& result_y)
{
	result_x = a_x + b_x;
	result_y = a_y + b_y;
}

float vector_scal_prod_2(float a_x, float a_y, float b_x, float b_y)
{
	return a_x * b_x + a_y * b_y;
}

void f2()
{
	// declare vectors
	float x1, y1;
	float x2, y2;

	// input vectors
	vector_input_2(x1, y1, "vector 1");
	vector_input_2(x2, y2, "vector 2");

	// sum of the vectors
	float x3, y3;
	vector_sum_2(x1, y1, x2, y2, x3, y3);
	vector_output_2(x3, y3, "sum vector");

	// product of the vectors
	float scalar_prod = vector_scal_prod_2(x1, y1, x2, y2);
	cout << "scalar product of vectors is " << scalar_prod << endl;
}





void vector_input_3(float& x, float& y, float& z, string vector_name)
{
	cout << "Input " << vector_name << " x: ";
	cin >> x;
	cout << "Input " << vector_name << " y: ";
	cin >> y;
	cout << "Input " << vector_name << " z: ";
	cin >> z;
}

void vector_output_3(float x, float y, float z, string vector_name)
{
	cout << vector_name << " = (" << x << "," << y << "," << z << ")" << endl;
}

void vector_sum_3(float a_x, float a_y, float a_z, float b_x, float b_y, float b_z, float& result_x, float& result_y, float& result_z)
{
	result_x = a_x + b_x;
	result_y = a_y + b_y;
	result_z = a_z + b_z;
}

float vector_scal_prod_3(float a_x, float a_y, float a_z, float b_x, float b_y, float b_z)
{
	return a_x * b_x + a_y * b_y + a_z * b_z;
}

void f3()
{
	// declare vectors
	float x1, y1, z1;
	float x2, y2, z2;

	// input vectors
	vector_input_3(x1, y1, z1, "vector 1");
	vector_input_3(x2, y2, z2, "vector 2");

	// sum of the vectors
	float x3, y3, z3;
	vector_sum_3(x1, y1, z1, x2, y2, z2, x3, y3, z3);
	vector_output_3(x3, y3, z3, "sum vector");

	// product of the vectors
	float scalar_prod = vector_scal_prod_3(x1, y1, z1, x2, y2, z2);
	cout << "scalar product of vectors is " << scalar_prod << endl;
}





struct Vector_4
{
	float x;
	float y;
};

void vector_input_4(Vector_4& v, string vector_name)
{
	cout << "Input " << vector_name << " x: ";
	cin >> v.x;
	cout << "Input " << vector_name << " y: ";
	cin >> v.y;
}

void vector_output_4(Vector_4 v, string vector_name)
{
	cout << vector_name << " = (" << v.x << "," << v.y << ")" << endl;
}

Vector_4 vector_sum_4(Vector_4 a, Vector_4 b)
{
	Vector_4 result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}

float vector_scal_prod_4(Vector_4 a, Vector_4 b)
{
	return a.x * b.x + a.y * b.y;
}

void f4()
{
	cout << "size of 2d vector is " << sizeof(Vector_4) << endl;

	// declare vectors
	Vector_4 v1;
	Vector_4 v2;

	// input vectors
	vector_input_4(v1, "vector 1");
	vector_input_4(v2, "vector 2");

	// sum of the vectors
	Vector_4 v3 = vector_sum_4(v1, v2);
	vector_output_4(v3, "sum vector");

	// product of the vectors
	float scalar_prod = vector_scal_prod_4(v1, v2);
	cout << "scalar product of vectors is " << scalar_prod << endl;
}




struct Vector_5
{
	float x;
	float y;
	float z;
};

void vector_input_5(Vector_5& v, string vector_name)
{
	cout << "Input " << vector_name << " x: ";
	cin >> v.x;
	cout << "Input " << vector_name << " y: ";
	cin >> v.y;
	cout << "Input " << vector_name << " z: ";
	cin >> v.z;
}

void vector_output_5(Vector_5 v, string vector_name)
{
	cout << vector_name << " = (" << v.x << "," << v.y << "," << v.z << ")" << endl;
}

Vector_5 vector_sum_5(Vector_5 a, Vector_5 b)
{
	Vector_5 result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;

	return result;
}

float vector_scal_prod_5(Vector_5 a, Vector_5 b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

void f5()
{
	cout << "size of 3d vector is " << sizeof(Vector_5) << endl;

	// declare vectors
	Vector_5 v1;
	Vector_5 v2;

	// input vectors
	vector_input_5(v1, "vector 1");
	vector_input_5(v2, "vector 2");

	// sum of the vectors
	Vector_5 v3 = vector_sum_5(v1, v2);
	vector_output_5(v3, "sum vector");

	// product of the vectors
	float scalar_prod = vector_scal_prod_5(v1, v2);
	cout << "scalar product of vectors is " << scalar_prod << endl;
}





struct Person
{
	string Name;
	string Surname;

	int Age;
	float Weight;

	double CashInBank;
	Vector_4 Position;
};

bool IsAdult(Person person)
{
	return person.Age > 18;
}

Vector_4 GetCurrentPosition()
{
	Vector_4 pos = { 3, 4 };
	return pos;
}

void f6()
{
	//Person people[3];
	Person* people = new Person[3];


	people[0].Name = "Ara";
	people[0].Surname = "Petrosyan";
	people[0].Age = 38;
	people[0].Position.x = 1;
	people[0].Position.y = 2;

	people[1].Name = "Karen";
	people[1].Surname = "Petrosyan";
	people[1].Age = 36;
	people[1].Weight = 60;
	people[1].Position = GetCurrentPosition();

	people[2].Name = "Anri";
	people[2].Surname = "Petrosyan";
	people[2].Age = 12;
	people[2].Weight = 35;

	for (int i = 0; i < 3; i++)
	{
		bool isAdult = IsAdult(people[i]);
		if (isAdult)
			cout << people[i].Name << " is adult" << endl;
		else
			cout << people[i].Name << " is child" << endl;
	}


	// Do not do like this
	string Name[10];
	string Surname[10];

	int Age[10];
	float Weight[10];

	Name[0] = "Ara";


	Person myself = people[0];

	Person* ptr_person = &myself;

	//ptr_person = &people[2];

	//ptr_person = people;


	myself.Name = "Shmavon";
	myself.Age = 10;
	if (!IsAdult(myself))
		cout << "Something is wrong with me" << endl;

	(*ptr_person).Name = "Ara";
	(*ptr_person).Age = 38;
	if (IsAdult(*ptr_person))
		cout << "Now I'm OK" << endl;

	ptr_person->Name = "Ara";		// same as (*ptr_person).Name = "Ara";
	ptr_person->Age = 38;			// same as (*ptr_person).Age = 38;
	if (IsAdult(*ptr_person))
		cout << "Now I'm OK" << endl;



	delete[] people;
}
