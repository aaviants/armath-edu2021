#include <iostream>

#include <string>


struct vector
{
	int x;
	int y;

	vector()
	{
		x = 0;
		y = 0;
	}
	vector(int value1, int value2)
	{
		x = value1;
		y = value2;
	}

	vector operator + (vector second)
	{
		vector v;

		v.x = x + second.x;
		v.y = y + second.y;

		return v;
	}
	vector operator - (vector second)
	{
		vector v;

		v.x = x - second.x;
		v.y = y - second.y;

		return v;
	}
	int operator * (vector second)
	{
		return x * second.x + y * second.y;
	}
	vector operator * (int number)
	{
		vector v;

		v.x = x * number;
		v.y = y * number;

		return v;
	}
	vector operator *= (int number)
	{
		vector v;

		v.x = x * number;
		v.y = y * number;

		return v;
	}
};
struct text
{
	char* letters;
	int length;
};

void f1()
{
	vector v1 = {};
	v1.x = 5;
	v1.y = 10;

	vector v2 = v1;

	vector v3 = v1 + v2;
	vector v4 = v1 - v2;

	int prod = v1 * v3;

	vector v5 = v3 * 7;

	vector v6(3, 4);

	v2 *= 4;


	text t1 = {};
	t1.letters = new char[10];
	t1.length = 10;
	strcpy_s(t1.letters, 10, "Gvidon");

	std::cout << t1.letters << std::endl;

	text t2 = {};
	t2.letters = new char[t1.length];
	t2.length = t1.length;
	strcpy_s(t2.letters, 10, t1.letters);

	delete[] t1.letters;

	std::cout << t2.letters << std::endl;
	delete[] t2.letters;
}

class string
{
private:
	char* buffer;
	int length;

public:
	string()
	{
		buffer = nullptr;
		length = 0;
	}
	string(const char* text)
	{
		length = strlen(text);
		buffer = new char[length + 1];
		strcpy_s(buffer, length + 1, text);
	}
	string(const string& other)
	{
		length = strlen(other.buffer);
		buffer = new char[length + 1];
		strcpy_s(buffer, length + 1, other.buffer);
	}
	~string()
	{
		if (buffer != nullptr)
			delete[] buffer;
	}

	string operator = (string other)
	{
		setText(other.getText());

		return *this;
	}

	string operator + (string tail)
	{
		string result;

		result.length = length + tail.length;
		result.buffer = new char[result.length + 1];

		strcpy_s(result.buffer, result.length + 1, buffer);
		strcpy_s(result.buffer + length, result.length + 1 - length, tail.buffer);

		return result;
	}

	void setText(const char* text)
	{
		length = strlen(text);
		if (buffer != nullptr)
			delete[] buffer;
		buffer = new char[length + 1];
		strcpy_s(buffer, length + 1, text);
	}
	const char* getText()
	{
		return buffer;
	}
	int getLength()
	{
		return length;
	}

	string join(string tail)
	{
		string result;

		result.length = length + tail.length;
		result.buffer = new char[result.length + 1];

		strcpy_s(result.buffer, result.length + 1, buffer);
		strcpy_s(result.buffer + length, result.length + 1 - length, tail.buffer);

		return result;
	}
};

void f2()
{
	string a;

	a.setText("Gvidon");
	a.setText("Peprush");

	string b = a;
	string d(a);
	string c;

	c = b;
	c = a;

	d = c = b = a;

	string e = "Ara";
	string f("Ara");

	std::cout << a.getText() << std::endl;
	std::cout << b.getText() << std::endl;
}

int main()
{
	f1();
	f2();

	string name;
	name.setText("Ara ");

	string surname;
	surname.setText("Petrosyan");

	string fullName = name.join(surname);
	std::cout << fullName.getText() << std::endl;

	string fullName2 = name + surname;
	std::cout << fullName2.getText() << std::endl;

	return 0;
}
