#include "libraries.h"
#include "prototypes.h"

char** sem_5_get_array_of_sentences(char* text, size_t* sentences_quantity) {
	//size_t sentences_quantity = 0;
	for (size_t i = 0; i < strlen(text); i++)
		if (text[i] == '.' || text[i] == '?' || text[i] == '!' || text[i] == '...') (*sentences_quantity)++;

	char* pch = NULL;
	char* next_token = NULL;
	pch = strtok_s(text, ".?!", &next_token);
	char** sentences_array = new char* [*sentences_quantity];
	for (size_t i = 0; i < *sentences_quantity; i++)
		if (pch != NULL) {
			sentences_array[i] = new char[strlen(pch) + 2];

			for (size_t j = 0; j < strlen(pch); j++)
				sentences_array[i][j] = pch[j];
			sentences_array[i][strlen(pch)] = '\0';
			pch = strtok_s(NULL, ".?!", &next_token);
		}
	//for (size_t i = 0; i < *sentences_quantity; i++)
	//{
	//	std::cout << sentences_array[i];
	//	std::cout << '\n';
	//}

	return sentences_array; 
};
