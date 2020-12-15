#include "libraries.h"
#include "prototypes.h"
void interface_sem_5_tasks_menu(char* text, char* word)
{
	system("CLS");
	cout_text_and_word(text, word);
	const int fcn_number_2 = 3;
	char menu_positions_2[fcn_number_2][100] = {
		"1 - Find the sentence that contains the word. (Case-insensetive)\n",
		"2 - Find the sentence that contains the word. (Case-sensetive)\n",
		"3 - Go back.\n"
	};
	void (*actions_2[fcn_number_2])(const char*, const char*) = 
	{
		interface_sem_5_tasks_menu_item_1,
		interface_sem_5_tasks_menu_item_2,
		interface_sem_5_tasks_menu_item_3
	};
	bool is_first_iter = true;
	do {
		if (is_first_iter) 
			is_first_iter = false;
		else 
		{
			std::cout << "Press ENTER to continue...";
			char a = getchar();
		}

		system("CLS");
		cout_text_and_word(text, word);

	} while (menu(menu_positions_2, actions_2, fcn_number_2, text, word) != fcn_number_2);
	
};

