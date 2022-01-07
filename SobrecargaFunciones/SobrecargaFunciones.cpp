#include <iostream>

int sumar (int x, int y)
{
	return x + y;
}


int sumarInts(int x, int y)
{
	return x + y;
}

double sumarDoubles(double x, double y)
{
	return x + y;
}

double sumar(double x, double y)
{
	return x + y;
}

int sumar(int x, int y, int z)
{
	return x + y + z;
}

int main()
{
	int a = sumar(3, 5);
	std::cout << a <<"\n";
	double b = sumar(4.3, 5.6);
	std::cout << b << "\n";
	int c = sumar(6, 7, 5);
	std::cout << c << "\n";
}






