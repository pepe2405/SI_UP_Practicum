#include <iostream>

int main()
{
	int a = 0, b = 0;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	std::cout << "a: " << a << std::endl << "b: " << b;
}