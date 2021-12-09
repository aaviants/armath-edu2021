#include <iostream>

// Sphere with the center in point (a,b,c) and radius r
// Figure out if point (x,y,z) lies within the sphere

// ((x-a)^2 + (y-b)^2 + (z-c)^2) ^ (1/2) >=< r


class Point
{
public:
	float x;
	float y;
	float z;

	void input(std::string objectName)
	{
		std::cout << "Input " << objectName << " x: ";
		std::cin >> x;
		std::cout << "Input " << objectName << " y: ";
		std::cin >> y;
		std::cout << "Input " << objectName << " z: ";
		std::cin >> z;
	}
	void print(std::string objectName)
	{
		std::cout << "Coordinates of the "<< objectName << " are (" << x << "," << y << "," << z << ")" << std::endl;
	}
	float calculateDistance(Point otherPoint)
	{
		float distSquare = (x - otherPoint.x) * (x - otherPoint.x) +
			(y - otherPoint.y) * (y - otherPoint.y) +
			(z - otherPoint.z) * (z - otherPoint.z);

		return std::sqrt(distSquare);
	}
};

enum PointLocation
{
	InsideSphere,
	OnEdgeOfShpere,
	OutsideSphere
};

class Sphere
{
public:
	Point center;
	float radius;

	void input()
	{
		center.input("sphere center");

		std::cout << "Input sphere radius: ";
		std::cin >> radius;
	}
	void print()
	{
		center.print("sphere center");
		std::cout << "Radius of the sphere is " << radius << std::endl;
	}
	PointLocation determinePointLocation(Point point)
	{
		PointLocation location;

		float distance = point.calculateDistance(center);
		if (distance < radius)
			location = InsideSphere;
		else if (distance > radius)
			location = OutsideSphere;
		else
			location = OnEdgeOfShpere;

		return location;
	}
};

//struct Point
//{
//	float x;
//	float y;
//	float z;
//};

//struct Sphere
//{
//	Point center;
//	float radius;
//};

//Point inputPoint(std::string objectName)
//{
//	Point result = { 0, 0, 0 };
//
//	std::cout << "Input " << objectName << " x: ";
//	std::cin >> result.x;
//	std::cout << "Input " << objectName << " y: ";
//	std::cin >> result.y;
//	std::cout << "Input " << objectName << " z: ";
//	std::cin >> result.z;
//
//	return result;
//}

//Sphere inputSphere()
//{
//	Sphere result = { 0, 0, 0, 0 };
//
//	//result.center = inputPoint("sphere center");
//	result.center.input("sphere center");
//	result.center.print("sphere center");
//
//	std::cout << "Input sphere radius: ";
//	std::cin >> result.radius;
//
//	return result;
//}

//float calculateDistance(Point pt1, Point pt2)
//{
//	float distSquare = (pt1.x - pt2.x)* (pt1.x - pt2.x) + 
//						(pt1.y - pt2.y) * (pt1.y - pt2.y) + 
//						(pt1.z - pt2.z) * (pt1.z - pt2.z);
//
//	return std::sqrt(distSquare);
//}


//PointLocation determinePointLocationRelativeToTheSphere(Sphere s, Point p)
//{
//	PointLocation location;
//
//	//float distance = calculateDistance(s.center, p);
//	float distance = p.calculateDistance(s.center);
//	if (distance < s.radius)
//		location = InsideSphere;
//	else if (distance > s.radius)
//		location = OutsideSphere;
//	else
//		location = OnEdgeOfShpere;
//
//	return location;
//}

void g();

int main()
{
	g();

	// 1. Input data
	// 
	// 1.a. Input Sphere
	Sphere sphere = {};
	sphere.input();
	sphere.print();

	// 1.b. Input the test point
	Point testPoint = {};
	testPoint.input("test point");
	testPoint.print("test point");

	// 2. Check if the test point is within the sphere
	PointLocation location = sphere.determinePointLocation(testPoint);
	std::string pointPosition;

	switch (location)
	{
	case InsideSphere:
		pointPosition = "inside of";
		break;
	case OnEdgeOfShpere:
		pointPosition = "on";
		break;
	case OutsideSphere:
		pointPosition = "outside of";
		break;
	}

	// 3. Print the result
	std::cout << "Test point is " << pointPosition << " the sphere" << std::endl;

	return 0;
}




class ClassName
{
public:
	int x;
	double y;
	Sphere z;

	void print(float f) {}

	std::string t;
};

void f()
{
	ClassName object;

	object.x = 1;
	object.y = object.x;

	object.t = "abc";

	object.print(1.5f);
}





class Circle
{
public:
	float x;
	float y;
private:
	float r;

public:
	void setRadius(float value)
	{
		if (value <= 0)
		{
			std::cout << "you entered an incorrect radius." << std::endl;
			return;
		}

		r = value;
	}
	float getRadius()
	{
		return r;
	}
};

void g()
{
	Circle obj = {};
	float r = 0;

	obj.x = 1;
	obj.y = 2;

	obj.setRadius(7);
	r = obj.getRadius();
	std::cout << "radius is " << r << std::endl;
	obj.setRadius(-7);
	r = obj.getRadius();
	std::cout << "radius is " << r << std::endl;
	obj.setRadius(-1);
	r = obj.getRadius();
	std::cout << "radius is " << r << std::endl;
	obj.setRadius(10);
	r = obj.getRadius();
	std::cout << "radius is " << r << std::endl;
}
