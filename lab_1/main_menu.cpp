#include "libraries.h"
#include "prototypes.h"

void main_menu() {
	system("CLS");
	//std::fstream file("images\\asciiimage.txt");
	//std::string s;
	//while (getline(file, s)) {
	//	std::cout << s<<"\n";
	//}
	//std::cout << "\n";
	const int n = 4;
	char chars[n][100] = { 
		"1 - sem_3 - array\n", 
		"2 - sem_4 - matrix\n", 
		"3 - sem_5 - char sequences\n",
		"4 - exit\n",
	};
	void (*actions[n])() = {
		interface_sem_3_menu, 
		interface_sem_4_menu, 
		interface_sem_5_menu,
		exit
	};
	menu(chars, actions, n);
	
}