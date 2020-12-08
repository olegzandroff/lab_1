#include "libraries.h"
#include "prototypes.h"

char* interface_sem_5_input_menu_item_1() {
	int length = get_file_length_in_chars("default_inputs\\sem_5_input.txt");
	char* text = interface_sem_5_input_text_from_file("default_inputs\\sem_5_input.txt");

	return text;
};

char* interface_sem_5_input_menu_item_2() {
	char* text = new char[5];
	text[0] = '\0';
	std::cout << "Enter sentences\n";
	bool flag = true;

	while (flag) {
		char* buffer = new char[10000];
		std::cin.getline(buffer, 10000);
		int str_size = static_cast<int>(strlen(buffer));
		//... to .
		for (int i = 2; i < str_size; i++)
		{
			if (buffer[i] == '.' && buffer[i - 1] == '.' && buffer[i - 2] == '.') {
				buffer[i] = '.';
				buffer[i] = ' ';
				buffer[i] = ' ';
			}
		}

		if ((buffer[str_size - 1] != '.') &&
			(buffer[str_size - 1] != '?') &&
			(buffer[str_size - 1] != '!')) 
		{
			std::cout << "You forgot the ./!/?/...\n";
			delete[] buffer;
			continue;
		}
		else { text = stringcat(text, buffer); }
			char a;
		do {
			std::cout << "\nDo you wish to continue entering?(y/n)\n";
			a = getchar();
		} while (!(a == 'y' || a == 'n'));
		if (a == 'y') flag = true;
			     else flag = false;
		std::cin.getline(buffer, 10000);
		delete[] buffer;
	}
	return text;
};

char* interface_sem_5_input_menu_item_3() {
	return nullptr;
};