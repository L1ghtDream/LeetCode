#include <stdio.h>

#include "1356.c"
#include "557.c"
#include "3.c"

int main() {

    //char s[] = "abcabcbb";
    //char s[] = "bbbbb";
    char s[] = "pwwkew";

    int size = lengthOfLongestSubstring(s);

    printf("%d", size);

    return 0;
}
