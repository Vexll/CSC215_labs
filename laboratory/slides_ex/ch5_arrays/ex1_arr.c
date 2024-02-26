#include <stdio.h>
#define length(arr) (sizeof(arr) == 0 ? 0 : sizeof(arr) / sizeof(arr[0]))

int main()
{
    int number[5];
    int len = length(number);
    printf("the length of numbers array = %d\n", len);

    int twoDim[2][4] = {{1, 2, 3, 4}, {-1, -2, -3, -4}};
    printf("1st element is = %d\n", twoDim[0][0]);
    return 0;
}