<<<<<<< HEAD
#include "prototypes.h"
=======
 #include "prototypes.h"
>>>>>>> templates

bool sem_5_bad_scenario_1(const char* buffer) {

	int str_size = static_cast<int>(strlen(buffer));

	return (buffer[str_size - 1] != '.') &&
		(buffer[str_size - 1] != '?') &&
		(buffer[str_size - 1] != '!');
}

bool sem_5_bad_scenario_2(const char* buffer) {
	return strlen(buffer) == 0;
}

bool sem_5_bad_scenario_3(const char* buffer) {
	bool flag = false;
	for (size_t i = 0; i < strlen(buffer); i++)
		if (!((buffer[i] >= 65 && buffer[i] <= 90) || (buffer[i] >= 97 && buffer[i] <= 122))) {
			flag = true;
			break;
		}
	return flag;
}

bool sem_5_bad_scenario_4(char c1, char c2, char c3) {
	return (c1=='.' && c2=='.' && c3=='.');
}
