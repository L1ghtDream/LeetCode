#include <stdio.h>

#include "1356.c"

int main() {

    //int tests[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int tests[] = {1024,512,256,128,64,32,16,8,4,2,1};
    int returnSize = 0;

    int *output = sortByBits(tests, sizeof(tests) / sizeof(int), &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", output[i]);
    }


    return 0;
}
