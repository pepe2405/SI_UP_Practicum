#include <iostream>

int main()
{
	int n = 0, min = 0, max = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		std::cin >> k;
		if (i == 0)
		{
			min = k;
			max = k;
		}
		if (k < min)
			min = k;
		if (k > max)
			max = k;
	}
	std::cout << "Min: " << min << std::endl << "Max: " << max;

}
