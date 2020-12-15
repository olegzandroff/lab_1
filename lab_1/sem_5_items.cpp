#include "libraries.h"
#include "prototypes.h"

void interface_sem_5_tasks_menu_item_1(const char* text, const char* word) 
{
	char* lowercase_text = to_lower(text);
	char* lowercase_word = to_lower(word);
	size_t number_of_sentences = 0;
	char** sentences_array = sem_5_get_array_of_sentences(lowercase_text, &number_of_sentences);

	for (size_t i = 0; i < number_of_sentences; i++)
	{
		char* found = strstr(sentences_array[i], lowercase_word);
		bool equal = false;
		if (found != nullptr)
			if (found[strlen(word)] == '\0' ||
				found[strlen(word)] == ' ' ||
				found[strlen(word)] == '.' ||
				found[strlen(word)] == '?' ||
				found[strlen(word)] == '!')
			{
				equal = true;
			};

		if (equal) {
			std::cout << "\n" << sentences_array[i] << "\n";
			std::cout << "It is the " << i + 1 << " sentence\n";
		};
	}
	for (size_t i = 0; i < number_of_sentences; i++)
		delete[] sentences_array[i];
	delete[] sentences_array;
	delete[] lowercase_text;
	delete[] lowercase_word;
};


void interface_sem_5_tasks_menu_item_2(const char* text, const char* word) 
{
	char* buffer = new char[strlen(text) + 1];
	for (size_t i = 0; i < strlen(text) + 1; i++)
		buffer[i] = text[i];

	size_t number_of_sentences = 0;
	char** sentences_array = sem_5_get_array_of_sentences(buffer, &number_of_sentences);
	for (size_t i = 0; i < number_of_sentences; i++)
	{
		const char* found = strstr(sentences_array[i], word);
		if (found != nullptr) 
		{
			std::cout << "\n" << sentences_array[i] << "\n";
			std::cout << "It is the " << i + 1 << " sentence\n";
		};
	}
	for (size_t i = 0; i < number_of_sentences; i++)
		delete[] sentences_array[i];

	delete[] sentences_array;
};

void interface_sem_5_tasks_menu_item_3(const char* text, const char* word) 
{
	delete[] word;
	delete[] text;
};