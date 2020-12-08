#include "libraries.h"
#include "prototypes.h"

void interface_sem_5() {
	char* text = interface_sem_5_input_menu();
	if (text == nullptr) return;
	cout_text_and_word(text, "");

	char* word = new char[5];
	word[0] = '\0';
	bool flag = true;
	char* buffer = new char[10000];
	while (flag) {
		delete[] buffer;
		buffer = new char[10000];
		flag = false;
		std::cout << "Enter the word:\n";
		std::cin.getline(buffer, 10000);
		for (size_t i = 0; i < strlen(buffer); i++)
			if (!((buffer[i] >= 65 && buffer[i] <= 90) || (buffer[i] >= 97 && buffer[i] <= 122)))
			{
				std::cout << "\nOops! You used at least one prohibited symbol.\nThe word must contain only uppercase/lowercase english letters.\nTry again!\n\n";
				flag = true;
				break;
			}
	}
	word = stringcat(word, buffer);
	delete[] buffer;
	interface_sem_5_tasks_menu(text, word);
};