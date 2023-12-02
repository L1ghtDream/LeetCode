#include <stdio.h>
#include <malloc.h>

#include "1160.c"

int main()
{

	char **words = malloc(3 * sizeof(char *));
	words[0] = malloc(5 * sizeof(char));
	words[0] = malloc(5 * sizeof(char));
	words[0] = malloc(8 * sizeof(char));
	words[0] = "hello";
	words[1] = "world";
	words[2] = "leetcode";

	printf("%d", countCharacters(words, 3, "welldonehoneyr"));

	return 0;
}
