#include "prototypes.h"

void interface_sem_5() 
{
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
		if (flag = sem_5_bad_scenario_3(buffer)) 
		{
			std::cout << "\nYou used at least one prohibited symbol.\nThe word must contain only uppercase/lowercase english letters.\nTry again!\n\n";
		}
		if (flag = sem_5_bad_scenario_2(buffer)) 
		{
			std::cout << "\nThe word can't be empty!\n\n";
		}
	}
	word = stringcat(word, buffer);
	delete[] buffer;
	interface_sem_5_tasks_menu(text, word);
};