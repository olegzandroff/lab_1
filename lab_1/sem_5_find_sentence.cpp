#include "libraries.h"
#include "prototypes.h"

//char* sem_5_find_sentence(const char* text, const char* word) {
//	const char* p_word = strstr(text, word);
//
//	if (p_word != nullptr) {
//		int start_index = (&p_word[0] - &text[0]);
//		int left = start_index, right = start_index;
//		while (left > 0 && text[left] != '.')
//			left--;
//
//		while (right < strlen(text) - 1 && text[right] != '.')
//			right++;
//
//		if (text[left] == '.') left++;
//		char* result = new char[right - left + 2];
//		result[right - left + 1] = '\0';
//		for (size_t i = left, j = 0; i <= right; i++, j++)
//		{
//			result[j] = text[i];
//		}
//		//std::cout << left << " ";
//		//std::cout << right << "\n\n";
//		return result;
//	}
//	else {
//		return nullptr;
//	}
//};
