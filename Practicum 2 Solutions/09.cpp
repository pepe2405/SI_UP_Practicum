#include <iostream>

int main()
{
	int n = 0, m = 0;
	if (n > 7 || n < 0)
	{
		std::cout << "Invalid day";
		return 0;
	}
	switch ((n + m) % 7)
	{
	case 1:
		std::cout << "Monday";
		break;
	case 2:
		std::cout << "Tuesday";
		break;
	case 3:
		std::cout << "Wednesday";
		break;
	case 4:
		std::cout << "Thursday";
		break;
	case 5:
		std::cout << "Friday";
		break;
	case 6:
		std::cout << "Saturday";
		break;
	case 0:
		std::cout << "Sunday";
		break;
	}
}
