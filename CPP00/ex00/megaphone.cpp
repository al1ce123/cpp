#include <iostream>

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] > 96 && argv[i][j] < 124)
				argv[i][j] -= 32;
			std::cout << argv[i][j];
		}
	}
	std::cout << '\n';
	
	return 0;
}