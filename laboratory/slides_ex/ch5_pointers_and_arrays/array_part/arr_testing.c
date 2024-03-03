#include <stdio.h>
#define arr_length(arr) (sizeof(arr) == 0 ? 0 : sizeof(arr) / sizeof(arr[0]));

int main()
{
    char b[4][7] = {"CSC111", "CSC113", "CSC212", "CSC215"};                   // sizeof(b) 4 * 7(given) = 28
    char *bb[] = {"CSC215", "This is a beautiful morning", "M", "I guess so"}; // sizeof(bb) = 32, 4 * 8(bytes of OS)
    int size = arr_length(bb);
    int temp = sizeof(bb);
    printf("the size of arr = %d\n", temp);
    return 0;
}