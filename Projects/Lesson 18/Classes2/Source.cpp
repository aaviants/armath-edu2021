#include <iostream>

// functions
double sum(double x, double y)
{
	return x + y;
}

// data types
struct SPerson
{
	char* name;
	char* surname;
	short age;
	int weight;
};

SPerson inputPerson()
{
	const char* surname = "Petrosyan";

	SPerson p = {};

	p.name = new char[] {'A', 'r', 'a', '\0' };
	p.surname = new char[std::strlen(surname) + 1];

	const char* pointer = surname;
	int i = 0;

	while (*pointer != '\0')
	{
		p.surname[i] = *pointer;
		pointer++;
		i++;
	}
	p.surname[i] = '\0';

	return p;
}

void deletePerson(SPerson p)
{
	delete[] p.name;
	delete[] p.surname;
}

// classes
class Rectangle
{
public:
	int x;
	int y;
private:
	int width;
	int height;

public:

	Rectangle()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	~Rectangle()
	{
		std::cout << "rectangle with x = " << x << " is being destroyed" << std::endl;
	}

	bool setWidth(int w)
	{
		if (w <= 0)
			return false;

		width = w;
		return true;
	}
	int getWidth()
	{
		return width;
	}
	bool setHeight(int h)
	{
		if (h <= 0)
			return false;

		height = h;
		return true;
	}
	int getHeight()
	{
		return height;
	}

	int area()
	{
		return width * height;
	}
	int perimeter()
	{
		return 2 * (width + height);
	}
	double diagonal()
	{
		return std::sqrt(width * width + height * height);
	}

	void print()
	{
		std::cout << "x = " << x << std::endl <<
			"y = " << y << std::endl <<
			"w = " << width << std::endl <<
			"h = " << height << std::endl <<
			"a = " << area() << std::endl <<
			"p = " << perimeter() << std::endl;
	}
};

int areaOfRect(Rectangle rc)
{
	return rc.getWidth() * rc.getHeight();
}

Rectangle inputRectangle()
{
	Rectangle r;
	int w = 0, h = 0;
	bool isGoodValue = true;

	std::cout << "Input rect x: ";
	std::cin >> r.x;
	std::cout << "Input rect y: ";
	std::cin >> r.y;

	do
	{
		std::cout << "Input rect w: ";
		std::cin >> w;
		isGoodValue = r.setWidth(w);
		if (!isGoodValue)
			std::cout << "Invalid w is entered. Please retry." << std::endl;
	} while (!isGoodValue);

	do
	{
		std::cout << "Input rect h: ";
		std::cin >> h;
		isGoodValue = r.setHeight(h);
		if (!isGoodValue)
			std::cout << "Invalid h is entered. Please retry." << std::endl;
	} while (!isGoodValue);

	return r;
}


class CPerson
{
private:
	char* name;
	int age;

public:

	CPerson()
	{
		name = nullptr;
		age = 0;
	}
	CPerson(const CPerson& other)
	{
		name = nullptr;
		age = other.age;

		setName(other.name);
	}
	~CPerson()
	{
		if (name != nullptr)
			delete[] name;
	}

	const char* getName()
	{
		return name;
	}
	void setName(const char* text)
	{
		if (text == nullptr)
			return;

		int length = std::strlen(text);
		if (name != nullptr)
			delete[] name;
		name = new char[length + 1];

		const char* pointer_to_text = text;
		char* pointer_to_name = name;

		while (*pointer_to_text != '\0')
		{
			*pointer_to_name = *pointer_to_text;
			pointer_to_text++;
			pointer_to_name++;
		}
		*pointer_to_name = '\0';
	}
	int getAge()
	{
		return age;
	}
	void setAge(int a)
	{
		if (a < 0 || a >= 200)
			return;

		age = a;
	}

	void print()
	{
		std::cout << getName() << " is " << getAge() << " years old" << std::endl;
	}
};


int main()
{
	SPerson me = inputPerson();
	
	std::cout << "My name is " << me.name << std::endl;

	deletePerson(me);

	{
		CPerson he;
		he.setName("Gvidon");
		he.setAge(14);

		he.print();

		CPerson anotherOne;
		anotherOne.setName(he.getName());
		anotherOne.setAge(he.getAge());

		CPerson anotherTwo = he;

		CPerson she;
		she.setName("Peprush");
		she.setAge(13);

		she.print();
	}


	if (true)
	{
		Rectangle r;
		r.x = 13;

		Rectangle r2;
	}

	Rectangle rc = inputRectangle();

	int area1 = rc.area();
	int perimeter1 = rc.perimeter();

	int area2 = areaOfRect(rc);


	rc.print();

	return 0;
}
