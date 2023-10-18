#include <iostream>
int main()
{
	int r = 0, x = 0, y = 0;
	std::cin >> x >> y >> r;

	if (r * r < x * x + y * y)
	{
		std::cout << "In the circle";
	}
	else if (r * r > x * x + y * y)
	{
		std::cout << "Out of the circle";
	}
	else
	{
		std::cout << "On the circle.";
	}
	return 0;
}
// Fixed solution by <Ivana>