#include <stdio.h>

int main()
{
    char a;    /* Allocates 1 memory byte */
    char *ptr; /* Allocates memory space to store memory address */
    ptr = &a;  /* store the address of a in ptr. so, ptr points to a */
    int x = 1, y = 2, z[10] = {0, 1, 2, 3, 4, 5, 4, 3, 2, 1};
    int *ip;                         /* ip is a pointer to int */
    ip = &x;                         /* ip now points to x */
    y = *ip;                         /* y is now 1 */
    *ip = 0;                         /* x is now 0 */
    ip = &z[0];                      /* ip now points to z[0] */
    printf("%d %d %d\n", x, y, *ip); // 0 1 0
    y = *ip + 1;
    printf("%d %d %d\n", x, y, *ip); // 0 1 0
    *ip += 1;
    printf("%d %d %d\n", x, y, *ip); // 0 1 1
}