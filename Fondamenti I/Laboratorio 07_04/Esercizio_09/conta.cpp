#include <stdint.h>

size_t conta_parole(const char* s)
{
	int c = 0;
	for (int i = 0; s[i] != 0; ++i)
	{
		if (s[i] == ' ')
			++c;
	}
	
	return c;
}