 
#include "prototypes.h"

void interface_main_menu() 
{
	system("CLS");
	const int n = 4;
	char strings[n][100] =
	{
		"1 - sem_3 (array)\n",
		"2 - sem_4 (matrix)\n",
		"3 - sem_5 (char sequences)\n",
		"4 - exit\n"
	};

	void (*actions[n])() =
	{
		interface_sem_3,
		interface_sem_4,
		interface_sem_5,
		interface_exit
	};

	menu(strings, actions, n);
}