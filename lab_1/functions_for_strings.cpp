 
#include "prototypes.h"

char* stringcat(char* dest, const char* src) {
	size_t destlen = strlen(dest);
	size_t srclen = strlen(src);

	char* buff = new char[static_cast<int>(destlen + srclen + 1)];
	
	for (size_t i = 0; i < destlen; i++)
		if (dest[i]!='\0')
			buff[i] = dest[i];

	for (size_t i = destlen, j = 0; i < destlen + srclen; i++, j++)
		if (src[i] != '\0')
			buff[i] = src[j];
	buff[destlen + srclen] = '\0';
	delete[] dest;
	dest = buff;
	return dest;
}


char* to_lower(const char* string) {
	char* result = new char[strlen(string) + 1];
	for (size_t i = 0; i < strlen(string); i++)
	{
		result[i] = string[i];
	}
	result[strlen(string)] = '\0';
	
	for (size_t i = 0; i < strlen(result); i++)
	{
		if (result[i] >= 65 && result[i] <= 90) {
			result[i] = result[i] + 32;
		}
	}
	return result;
}

