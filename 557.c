#include <string.h>

char *reverseStr(char *s, int start, int end)
{
	while (start < end) {
		char tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}

	return s;
}

char *reverseWords(char *s)
{
	unsigned long long size = strlen(s);

	int last = 0;
	for (int i = 0; i < size; i++) {
		if (s[i] == ' ') {
			s = reverseStr(s, last, i - 1);
			last = i + 1;
		}
	}

	s = reverseStr(s, last, size - 1);

	return s;
}