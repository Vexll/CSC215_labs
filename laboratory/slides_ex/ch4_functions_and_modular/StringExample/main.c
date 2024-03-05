#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char word1[] = "Ali";
    char word2[] = "Mohammed";

    strcat(word1, word2);
    printf("word1 = %s\n", word1);
    printf("word2 = %s\n", word2);
    return 0;
}
