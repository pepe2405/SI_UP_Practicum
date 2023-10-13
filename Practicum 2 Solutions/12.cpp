#include <iostream>

int main()
{
	int n = 0, m = 0;
	char oper;
	std::cin >> n >> m >> oper;

	switch (oper)
	{
	case '+':
		std::cout << n + m;
		break;
	case '-':
		std::cout << n - m;
		break;
	case '*':
		std::cout << n * m;
		break;
	case '/':
		if (m == 0)
			std::cout << "Error";
		else
			std::cout << n / m;
		break;
	}

}
