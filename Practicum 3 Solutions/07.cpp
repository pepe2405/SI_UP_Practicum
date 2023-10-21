#include <iostream>

int main()
{
	int n = 0, m = 0;
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			std::cout << "( " << j << ' ' << i << " )";
		}
		std::cout << std::endl;
	}
}
