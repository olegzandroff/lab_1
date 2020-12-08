#include "libraries.h"
#include "prototypes.h"


//int sem_5_get_sentence_index(const char* text, const char* word) {
//	const char* p_word = strstr(text, word);
//	if (p_word != nullptr) {
//		int start_index = (&p_word[0] - &text[0]);
//		int counter = 0;
//		for (int i = start_index; i >= 0 ; i--)
//		{
//			if (text[i] == '.' || text[i] == '!' || text[i] == '?') counter++;
//		}
//		return counter + 1;
//	}
//};
