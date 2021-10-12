#include <iostream>

int main()
{
	float side1 = 10;
	float side2 = 15;
	float side3 = 12;

	std::cout << "Enter side 1: ";
	std::cin >> side1;
	std::cout << "Enter side 2: ";
	std::cin >> side2;
	std::cout << "Enter side 3: ";
	std::cin >> side3;

	float perimeter = side1 + side2 + side3;
	float s = perimeter / 2;
	float area = sqrt(s * (s-side1)*(s-side2)*(s-side3));

	std::cout << "Perimeter of the triangle is " << perimeter << std::endl;
	//std::cout << "Perimeter of the triangle is ";
	//std::cout << perimeter;
	//std::cout << std::endl;

	std::cout << "Area of the triangle is " << area << std::endl;
}
