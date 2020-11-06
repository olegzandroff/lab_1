#include "libraries.h"
#include "prototypes.h"

int interface::read_number() {
	std::cout << "Input a number: " << "\n";
	char* str = new char[10];
	bool flag = true;
	while (flag) {
		flag = false;
		gets_s(str, 10);
		if (str[0] == '\0')
			flag = true;
		else {
			for (int i = 0; i < 10; ++i) {
				if (str[i] == '\0') break;

				if (str[i] < '0' || str[i] > '9') {
					flag = true;
				}
			}
		}
		if (flag)
			std::cout << "Invalid input! Please, input a number!" << "\n";
	}
	return std::atoi(str);
};