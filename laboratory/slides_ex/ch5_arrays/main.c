#include <stdio.h>
#define length(arr) (sizeof(arr) == 0 ? 0 : sizeof(arr) / sizeof(arr[0]))

int main()
{
    char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    int len = sizeof(suit);
    // remember 32-bit OS -> char or int size = 4 bytes
    // 64-bit OS -> char or int size = 8 bytes
    printf("the length of numbers array = %d\n", len);
    return 0;
}