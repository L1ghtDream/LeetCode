#include <stdio.h>
#include <malloc.h>

#include "1662.c"

int main() {

    char **word1 = malloc(2 * sizeof(char *));
	word1[0] = malloc(2 * sizeof(char));
	word1[1] = malloc(1 * sizeof(char));
	word1[0] = "ab";
	word1[1] = "c";
	char **word2 = malloc(1 * sizeof(char *));
	word2[0] = malloc(1 * sizeof(char));
	word2[0] = "abc";

    printf("%d", arrayStringsAreEqual(word1, 2, word2, 1));

    return 0;
}
