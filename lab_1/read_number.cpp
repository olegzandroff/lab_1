 
#include "prototypes.h"

int interface_read_number() 
{
	std::cout << "Input a number: " << "\n";
	char* str = new char[1000];
	bool flag = true;
	while (flag) 
	{
		flag = false;
		gets_s(str, 1000);
		if (strlen(str) > 100 || strlen(str) == 0)
			flag = true;
		else 
		{
			for (int i = 0; i < 10; ++i) 
			{
				if (str[i] == '\0') break;

				if (!(i == 0 && str[i] == '-' && str[i + 1]> '0' && str[i + 1] < '9'))
					if (str[i] < '0' || str[i] > '9')
						flag = true;
			}
		}
		if (flag)
			std::cout << "\nInvalid input! Please, input a number!\n";
	}
	return std::atoi(str);
};

int interface_read_positive_number() 
{
	int n = interface_read_number();
	while (!(n > 0)) n = interface_read_number();
	return n;
};