#include "libraries.h"
#include "prototypes.h"


void interface_sem_5_menu() {
	char* text;
	int length = 0;
	system("CLS");
	std::cout << "sem_5 input menu\n";
	std::cout << "How would you like to input?\n"
			  << "1 - Load example.\n"
			  << "2 - input yourself.\n"
			  << "3 - input from file.\n"
			  << "4 - Go back.\n";

	switch (interface_read_number())
	{
	case 1: {
		std::fstream file("default_inputs\\sem_5_input.txt");
		char c;
		int length = 0;
		int sentences_number = 0;
		while (file >> c) {
			if (c == '.' || c == '!' || c == '?' || c == '...') sentences_number++;
			length++;
		}
		file.close();
		text = new char[length];
	}
		 break;

	case 2: {
		std::cout << "Input sentences:";

		char* string = new char[10000];

		char* text = new char[10];
		int length = 0;
		while (std::cin >> string) {
			for (int i = 0; ; i++)
			{

				if (string[i] == '\0') {
					if (i > 4 && (string[i - 1] + string[i - 2] + string[i - 3] == '...'))
					{
						std::cout << "You forgot the ./!/?/...\n";
						break;
					}

					if ((string[i - 1] != '.') && (string[i - 1] != '?') && (string[i - 1] != '!')) {
						std::cout << "You forgot the ./!/?/...\n";
						break;
					}

					char* buf = text;
					text = new char[length + i + 1];
					for (int i = 0; i < length; i++)
					{
						text[i] = buf[i];
					}
					for (int j = length, k = 0; j < length + i + 1; ++j, ++k)
					{
						text[j] = string[k];
					}
					length += (i + 1);
					delete[] buf;
					break;
					}
				}
			std::cout << "text: ";
			for (int i = 0; i < length; ++i)
			{
				std::cout << text[i];
			}
			std::cout << "\n";
		}

	break;
	}


	case 3:

		break;

	default:
		main_menu();
		break;
	}

	system("CLS");
	//std::cout << "Size of a matrix: " << n << "x" << m << "\n";
	//std::cout << "Elements: " << "\n";


	//system("CLS");
	//const int fcn_number = 5;
	//char strings[5][100] = {
	//	"1 - Find the sentence that contains the word "<<word<<".\n",
	//};
	//void (*actions[fcn_number])(double* array, int length) = {
	//	interface_sem_5_menu_item_1
	//};
	//menu()


};