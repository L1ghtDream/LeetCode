#include <string.h>

char *largestGoodInteger(char *num)
{
	char c = '0';
	int found = 0;

	int size = strlen(num);

	for (int i = 2; i < size; i++) {
		if (num[i] == num[i - 1] && num[i - 1] == num[i - 2]) {
			if (c <= num[i]) {
				c = num[i];
				found = 1;
			}
		}
	}

	if (!found) {
		return "";
	}

	char *result = calloc(4, sizeof(char));

	for (int i = 0; i < 3; i++) {
		result[i] = c;
	}

	return result;
}