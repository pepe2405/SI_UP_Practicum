#include <iostream>

int main()
{
	int a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;

	if ((a + b > c) && (b + c > a) && (c + a > b))
		std::cout << "Yes";
	else
		std::cout << "No";		
}