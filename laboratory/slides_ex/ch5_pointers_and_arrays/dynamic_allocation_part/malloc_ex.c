#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Example of using malloc function
    char *test = (char *)malloc(4 * sizeof(char));
    int len = 0;
    if (test) // good practice  to use this condition
    {
        *test = 'W'; // you could write test[0] = 'W'
        len++;
        *(test + 1) = 'a'; // test[1] .. same with other elements
        len++;
        *(test + 2) = 'e';
        len++;
        *(test + 3) = 'l';
        len++;
    }
    int i;
    for (i = 0; i < len; i++)
    {
        int e_size = sizeof(test[i]);
        printf("element size %d --> %d\t element --> %c\n", i + 1, e_size, test[i]);
    }
    printf("full size = %d\n", len); // here it print to me 8, because the size of pointer is 8(64-bit) system
    printf("the word -> %s\n", test);
    return 0;
}